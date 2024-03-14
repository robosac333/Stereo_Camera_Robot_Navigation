#include <broadcaster_demo.hpp>
#include "geometry_msgs/msg/transform_stamped.hpp"
#include <tf2_geometry_msgs/tf2_geometry_msgs.h>
#include <utils.hpp>
#include <deque>
#include <sstream>
// needed for the listener
#include <tf2/exceptions.h>
//including the topic aruco_marker

// allows to use, 50ms, etc
using namespace std::chrono_literals;

void BroadcasterDemo::turtlebot_mover(){

    // Create a Twist message with linear and angular velocity
    auto twist_msg = std::make_unique<geometry_msgs::msg::Twist>();
    ros2_aruco_interfaces::msg::ArucoMarkers::SharedPtr msg2;

    RCLCPP_INFO_STREAM(this->get_logger(), "markerid" << marker_id);


    if(marker_set == 0){
        if (marker_id == 0){ current_aruco = 0; marker_set = 1;}
        else if (marker_id == 1){ current_aruco = 1;marker_set = 1;}
        else if (marker_id == 2){ current_aruco = 2;marker_set = 1;}
    }
    else{
    if (current_aruco == 0){
        RCLCPP_INFO_STREAM(this->get_logger(), "current Aruco" << current_aruco << "  pos reached = " << position_reached << ", ");
        if(position_reached == 1){

            twist_msg->angular.z = -0.20;
            twist_msg->linear.x = 0.0;

            if(abs(current_orientation - initial_orientation) > 1.44){
            twist_msg->angular.z = 0;
            twist_msg->linear.x = 0.2;
            position_reached = 0;
            marker_set = 0;
            }
        }
        else{
            if (position_z > 0.86 ){
                // Set linear velocity (m/s)
                twist_msg->linear.x = 0.2;  
                twist_msg->angular.z = 0.0; 
                initial_orientation = current_orientation;
                position_reached = 0;
            } 
            else if (position_z < 0.86){ 
                position_reached = 1;
                initial_orientation = current_orientation;
            }
        }
    }
    else if (current_aruco == 1){
        RCLCPP_INFO_STREAM(this->get_logger(), "current Aruco" << current_aruco << "  pos reached = " << position_reached << ", ");
        if(position_reached == 1){
            // RCLCPP_INFO_STREAM(this->get_logger(), "entered while" << current_orientation << ", ");
            twist_msg->angular.z = 0.2;
            twist_msg->linear.x = 0.0;

            if(abs(current_orientation - initial_orientation) > 1.45){
            twist_msg->angular.z = 0;
            twist_msg->linear.x = 0.2;
            position_reached = 0;
            marker_set = 0;
            }
        }
        else{
            if (position_z > 0.85 ){
                // Set linear velocity (m/s)
                twist_msg->linear.x = 0.2;  
                twist_msg->angular.z = 0.0; 
                initial_orientation = current_orientation;
                position_reached = 0;
            } 
            else if (position_z < 0.85){ 
                position_reached = 1;
                initial_orientation = current_orientation;
            }
        }
    }
    else if (current_aruco == 2){
        if (position_z > 1.0 ){
        twist_msg->linear.x = 0.5;
        twist_msg->angular.z = 0.0; 
        }
    }
    }

    // Publish the Twist message to cmd_vel topic
    velocity_publisher_->publish(std::move(twist_msg));
}

void BroadcasterDemo::aruco_pos(const ros2_aruco_interfaces::msg::ArucoMarkers::SharedPtr msg) {
    if (!msg->poses.empty()) {
        // Assuming poses is a vector of poses, access the first pose in the vector

        auto ids = msg->marker_ids;

        float min_length=100.0;


        for (size_t i =0 ; i <  ids.size(); i++){
            float aruco_x = msg->poses[i].position.x;
            float aruco_y = msg->poses[i].position.y;
            float aruco_z = msg->poses[i].position.z;
            // lengths.push_back(std::pow(aruco_x,2)+std::pow(aruco_y,2)+std::pow(aruco_z,2));
            float lengths = (std::pow(aruco_x,2)+std::pow(aruco_y,2)+std::pow(aruco_z,2));
            if (lengths < min_length){
                j = i;
                min_length = lengths;
            }
        }    


        // aruco_id = msg->marker_ids[j];
        // std::cout << "aruco_id " << aruco_id <<"\n";


        const auto& firstPose = msg->poses[j];

        const auto& marker_id_ = msg->marker_ids[j];

        /////////////////////////////////////////////////
        // Aruco_marker
        /////////////////////////////////////////////////
        position_z = firstPose.position.z;
        marker_id = marker_id_;

        geometry_msgs::msg::TransformStamped aruco_transform_stamped;

        aruco_transform_stamped.header.stamp = this->get_clock()->now();
        aruco_transform_stamped.header.frame_id = "camera_rgb_optical_frame";
        aruco_transform_stamped.child_frame_id = "aruco_marker_detected";

        aruco_transform_stamped.transform.translation.x = firstPose.position.x;
        aruco_transform_stamped.transform.translation.y = firstPose.position.y;
        aruco_transform_stamped.transform.translation.z = firstPose.position.z;

        geometry_msgs::msg::Quaternion quaternion = utils_ptr_->set_quaternion_from_euler(
            firstPose.orientation.x, firstPose.orientation.y, firstPose.orientation.z
        );

        aruco_transform_stamped.transform.rotation.x = quaternion.x;
        aruco_transform_stamped.transform.rotation.y = quaternion.y;
        aruco_transform_stamped.transform.rotation.z = quaternion.z;
        aruco_transform_stamped.transform.rotation.w = quaternion.w;

        Utils utils;

        // Convert quaternion to Euler angles
        tf2::Quaternion tf_quaternion(quaternion.x, quaternion.y, quaternion.z, quaternion.w);
        std::array<double, 3> euler_angles = utils.set_euler_from_quaternion(tf_quaternion);


        RCLCPP_INFO_STREAM(this->get_logger(), // "x: " << firstPose.position.x << "\t"
        //                                     << "y: " << firstPose.position.y << "\t"
        //                                     << "z: " << firstPose.position.z << "\n"
        //                                     << "qx: " << firstPose.orientation.x << "\t"
        //                                     << "qy: " << firstPose.orientation.y << "\t"
        //                                     << "qz: " << firstPose.orientation.z << "\t"
        //                                     << "qw: " << firstPose.orientation.w << "\n"
        //                                     << "roll" << euler_angles[0] << "\t"
        //                                     << "pitch" << euler_angles[1] << "\t"
                                            "yaw" << euler_angles[2] << "\t"
                                            );

                                            
        // Send the transform
        tf_broadcaster_->sendTransform(aruco_transform_stamped);
    } else {
        RCLCPP_WARN(this->get_logger(), "ArucoMarkers message is empty");
    }
}


void BroadcasterDemo::battery_pos(const mage_msgs::msg::AdvancedLogicalCameraImage::SharedPtr msg) {
    //RCLCPP_INFO_STREAM(this->get_logger(), "Entered BatteryPos()");
    
        if (!msg->part_poses.empty()) {
        //RCLCPP_INFO_STREAM(this->get_logger(), "Received message");

        const auto& battery_positon = msg->part_poses[0];

            /////////////////////////////////////////////////
            // Battery_Mar
            /////////////////////////////////////////////////
            geometry_msgs::msg::TransformStamped logical_transform_stamped;

            logical_transform_stamped.header.stamp = this->get_clock()->now();
            logical_transform_stamped.header.frame_id = "logical_camera_link";
            logical_transform_stamped.child_frame_id = "battery_detector"; // Use color as child frame_id

            logical_transform_stamped.transform.translation.x = battery_positon.pose.position.x;
            logical_transform_stamped.transform.translation.y = battery_positon.pose.position.y;
            logical_transform_stamped.transform.translation.z = battery_positon.pose.position.z;

            geometry_msgs::msg::Quaternion quaternion = utils_ptr_->set_quaternion_from_euler(
                battery_positon.pose.orientation.x, battery_positon.pose.orientation.y, battery_positon.pose.orientation.z
            );

            logical_transform_stamped.transform.rotation.x = quaternion.x;
            logical_transform_stamped.transform.rotation.y = quaternion.y;
            logical_transform_stamped.transform.rotation.z = quaternion.z;
            logical_transform_stamped.transform.rotation.w = quaternion.w;

            // RCLCPP_INFO_STREAM(this->get_logger(), battery_positon.part.color << battery_positon.part.type <<" detected at xyz = ["
            //                     << battery_positon.pose.position.x << "," << battery_positon.pose.position.y << "," << battery_positon.pose.position.z << "]"
            //                     << " rpy = [" <<  battery_positon.pose.orientation.x << "," << battery_positon.pose.orientation.y << "," << battery_positon.pose.orientation.z << "]");


            // Add the entry to the list
            battery_color_vector_.push_back(msg->part_poses[0].part.color);

            battery_type_vector_.push_back(msg->part_poses[0].part.type);
            battery_x_vector_.push_back(msg->part_poses[0].pose.position.x);
            battery_y_vector_.push_back(battery_positon.pose.position.y);
            battery_z_vector_.push_back(battery_positon.pose.orientation.z);
            battery_ox_vector_.push_back(battery_positon.pose.orientation.x);
            battery_oy_vector_.push_back(battery_positon.pose.orientation.y);
            battery_oz_vector_.push_back(battery_positon.pose.orientation.z);
            print_data_vector();
            // Send the transform
            tf_broadcaster_->sendTransform(logical_transform_stamped);

    } else {
        //RCLCPP_WARN(this->get_logger(), "BatteryPos message is empty or part_poses is empty");
    }
}

void BroadcasterDemo::print_data_vector(){


 std::cout << " Battery Data : [ ";

      std::cout << battery_color_vector_.back()<< "," << battery_type_vector_.back() << " detected at xyz = [" << battery_x_vector_.back() << ","<< battery_y_vector_.back() << ","
      << battery_z_vector_.back() << "] rpy = [" << battery_ox_vector_.back() << "," << battery_oy_vector_.back() << "," << battery_oz_vector_.back() << "]";
   
    std::cout << "]" << std::endl;
  }


void BroadcasterDemo::imu_sensor(const sensor_msgs::msg::Imu::SharedPtr msg)
{
    // /////////////////////////////////////////////////
    // // IMU
    // /////////////////////////////////////////////////
    geometry_msgs::msg::TransformStamped logical_transform_stamped;

    const auto& firstPose = msg->orientation;


    // RCLCPP_INFO(this->get_logger(), "Broadcasting imu_frame");
    logical_transform_stamped.header.stamp = this->get_clock()->now();
    logical_transform_stamped.header.frame_id = "odom";
    logical_transform_stamped.child_frame_id = "imu_link";

    // quaternion = utils_ptr_->set_quaternion_from_euler(firstPose.x, firstPose.y, firstPose.z);
    logical_transform_stamped.transform.rotation.x = firstPose.x;
    logical_transform_stamped.transform.rotation.y = firstPose.y;
    logical_transform_stamped.transform.rotation.z = firstPose.z;
    logical_transform_stamped.transform.rotation.w = firstPose.w;
    // Send the transform
    tf_broadcaster_->sendTransform(logical_transform_stamped);

    Utils utils;

    tf2::Quaternion tf_quaternion(firstPose.x, firstPose.y, firstPose.z, firstPose.w);
    std::array<double, 3> euler_angles = utils.set_euler_from_quaternion(tf_quaternion);

    // RCLCPP_INFO_STREAM(this->get_logger(), "qx: " << firstPose.x << "\t"
    //                                     << "qy: " << firstPose.y << "\t"
    //                                     << "qz: " << firstPose.z << "\t"
    //                                     << "qw: " << firstPose.w << "\n"
    //                                     << "roll" << euler_angles[0] << "\t"
    //                                     << "pitch" << euler_angles[1] << "\t"
    //                                     << "yaw" << euler_angles[2] << "\t"
    //                                     );
    current_orientation = euler_angles[2];

}

int main(int argc, char** argv) {
  rclcpp::init(argc, argv);
  auto node = std::make_shared<BroadcasterDemo>("broadcaster_demo");
  rclcpp::spin(node);
  rclcpp::shutdown();
}