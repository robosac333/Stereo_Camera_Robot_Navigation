#include "geometry_msgs/msg/pose.hpp"
#include <deque>
#include <rclcpp/rclcpp.hpp>
#include <tf2_ros/static_transform_broadcaster.h>
#include <tf2_ros/transform_broadcaster.h>
#include <tf2_ros/transform_listener.h>
#include <tf2_ros/buffer.h>
#include "geometry_msgs/msg/twist.hpp"

using namespace std::chrono_literals;
class Sachin : public rclcpp::Node
{
    public:
        Sachin(std::string node_name) : Node(node_name)
        {
            RCLCPP_INFO(this->get_logger(), "Sachin started");
            tf_static_broadcaster_ = std::make_shared<tf2_ros::StaticTransformBroadcaster>(this);
            tf_broadcaster_ = std::make_shared<tf2_ros::TransformBroadcaster>(this);
            tf_buffer_ = std::make_unique<tf2_ros::Buffer>(this->get_clock());
            tf_buffer_->setUsingDedicatedThread(true);
            velocity_publisher_ = this->create_publisher<geometry_msgs::msg::Twist>("cmd_vel", 10);
            velocity_timer_= this-> create_wall_timer(std::chrono::milliseconds(1000), std::bind(&Sachin::turtlebot_mover, this));
        }
        void turtlebot_mover()
        {
            RCLCPP_INFO(this->get_logger(), "Sachin is moving");
        }