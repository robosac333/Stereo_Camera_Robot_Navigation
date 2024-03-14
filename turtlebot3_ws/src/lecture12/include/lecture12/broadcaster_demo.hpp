// broadcaster_demo.hpp
#pragma once

/// @brief Including all the dependencies
#include "geometry_msgs/msg/twist.hpp"
#include <cmath>
#include <tf2_ros/static_transform_broadcaster.h>
#include <utils.hpp>
#include <geometry_msgs/msg/pose.hpp>
#include "tf2_ros/static_transform_broadcaster.h"
#include "tf2_ros/transform_broadcaster.h"
#include <tf2_ros/transform_listener.h>
#include <tf2_ros/buffer.h>
#include "ros2_aruco_interfaces/msg/aruco_markers.hpp"
#include "mage_msgs/msg/advanced_logical_camera_image.hpp"
#include "sensor_msgs/msg/imu.hpp"
#include "rosgraph_msgs/msg/clock.hpp"
#include <cmath>

using namespace std::chrono_literals;

/// @brief BroadcasterDemo Class
class BroadcasterDemo : public rclcpp::Node
{
public:
    BroadcasterDemo(std::string node_name) : Node(node_name)
    {
/// @brief  parameter to decide whether to execute the broadcaster or not
        RCLCPP_INFO(this->get_logger(), "Broadcaster demo started");


/// @brief declaring aruco_marker parameters
        this->declare_parameter("aruco_marker_0","right_90");
        this->declare_parameter("aruco_marker_1","left_90");
        this->declare_parameter("aruco_marker_2","end");

/// @brief  storing parameter in attribute
        aruco_marker_0 = this->get_parameter("aruco_marker_0").as_string();
        aruco_marker_1 = this->get_parameter("aruco_marker_1").as_string();
        aruco_marker_2 = this->get_parameter("aruco_marker_2").as_string();
        

/// @brief initialize a static transform broadcaster
        tf_static_broadcaster_ = std::make_shared<tf2_ros::StaticTransformBroadcaster>(this);

/// @brief initialize the transform broadcaster
        tf_broadcaster_ = std::make_shared<tf2_ros::TransformBroadcaster>(this);

/// @brief Load a buffer of transforms
        tf_buffer_ = std::make_unique<tf2_ros::Buffer>(this->get_clock());
        tf_buffer_->setUsingDedicatedThread(true);

/// @brief  Create a utils object to use the utility functions
        utils_ptr_ = std::make_shared<Utils>();

/// @brief Velocity Publisher to make the turtlebot3 move
        velocity_publisher_ = this->create_publisher<geometry_msgs::msg::Twist>("cmd_vel", 10);
        velocity_timer_= this-> create_wall_timer(std::chrono::milliseconds(1000), std::bind(&BroadcasterDemo::turtlebot_mover, this));

/// @brief Subscriber to subscribe to Battery Data
        rclcpp::QoS qos(10);     qos.reliability(RMW_QOS_POLICY_RELIABILITY_BEST_EFFORT);
        logical_subscription_= this->create_subscription<mage_msgs::msg::AdvancedLogicalCameraImage>("/mage/advanced_logical_camera/image", 
        qos, std::bind(&BroadcasterDemo::battery_pos, this, std::placeholders::_1));

/// @brief Subscriber to subscribe to aruco_marker positions
        aruco_subscription_= this->create_subscription<ros2_aruco_interfaces::msg::ArucoMarkers>("aruco_markers", 
        10, std::bind(&BroadcasterDemo::aruco_pos, this, std::placeholders::_1));

/// @brief Subscriber to subscribe to imu_orientation data
        imu_subscription_= this->create_subscription<sensor_msgs::msg::Imu>("imu", 
        qos, std::bind(&BroadcasterDemo::imu_sensor, this, std::placeholders::_1));

    }


private:
/// @brief Boolean parameter to whether or not start the broadcaster */
    bool param_broadcast_;
/// @brief Buffer that stores several seconds of transforms for easy lookup by the listener. */
    std::shared_ptr<tf2_ros::Buffer> tf_buffer_;
/// @brief Static broadcaster object 
    std::shared_ptr<tf2_ros::StaticTransformBroadcaster> tf_static_broadcaster_;
/// @brief Broadcaster object 
    std::shared_ptr<tf2_ros::TransformBroadcaster> tf_broadcaster_;
/// @brief Utils object to access utility functions*/
    std::shared_ptr<Utils> utils_ptr_;
/// @brief Wall timer object for the broadcaster*/
    rclcpp::TimerBase::SharedPtr broadcast_timer_;
/// @brief Wall timer object for the static broadcaster*/
    rclcpp::TimerBase::SharedPtr static_broadcast_timer_;

/// @brief Subscription Declarations
    rclcpp::Subscription<mage_msgs::msg::AdvancedLogicalCameraImage>::SharedPtr logical_subscription_;
    void battery_pos(const mage_msgs::msg::AdvancedLogicalCameraImage::SharedPtr msg);

    rclcpp::Subscription<ros2_aruco_interfaces::msg::ArucoMarkers>::SharedPtr aruco_subscription_;
    void aruco_pos(const ros2_aruco_interfaces::msg::ArucoMarkers::SharedPtr msg);

    rclcpp::Subscription<sensor_msgs::msg::Imu>::SharedPtr imu_subscription_;
    void imu_sensor(const sensor_msgs::msg::Imu::SharedPtr msg);

    /**
     * @brief Parameter attributes
     *
     * @param aruco_marker_0;
     * @param aruco_marker_1;
     * @param aruco_marker_2;
     */

    std::string aruco_marker_0;
    std::string aruco_marker_1;
    std::string aruco_marker_2;

    /**
     * @brief Vectors to store Battery Data
     *
     * @param battery_color_vector_;
     * @param battery_type_vector_;
     * @param battery_x_vector_;
     * @param battery_y_vector_;
     * @param battery_z_vector_;
     * @param battery_ox_vector_;
     * @param battery_oy_vector_;
     * @param battery_oz_vector_;
     */
    std::vector<int> battery_color_vector_;    std::vector<int> battery_type_vector_;     std::vector<int> battery_x_vector_;
    std::vector<int> battery_y_vector_;     std::vector<int> battery_z_vector_;    std::vector<int> battery_ox_vector_;
    std::vector<int> battery_oy_vector_;    std::vector<int> battery_oz_vector_;

// Function to print data
    void print_data_vector();
    
    rclcpp::TimerBase::SharedPtr velocity_timer_;
    rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr velocity_publisher_;
    void turtlebot_mover();

    /**
     * @brief Flags to control positon of turtkebot3
     *
     * @param marker_id;
     * @param position_z;
     * @param current_aruco;
     * @param position_reached;
     * @param marker_set;
     * @param current_orientation;
     * @param initial_orientation;
     * @param j;
     */
    double marker_id;
    double position_z;
    int current_aruco;
    int position_reached = 0;
    int marker_set = 0;
    double current_orientation;
    double initial_orientation;
    int j;
};// namespace std::chrono_literals

