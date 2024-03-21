# Install script for directory: /home/sj/Desktop/Robotics_yo/809Y/Move-the-turtlebot3-through-the-maze-as-per-the-ID-on-the-aruco-marker./turtlebot3_ws/src/lecture12

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/sj/Desktop/Robotics_yo/809Y/Move-the-turtlebot3-through-the-maze-as-per-the-ID-on-the-aruco-marker./turtlebot3_ws/install/lecture12")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/lecture12" TYPE DIRECTORY FILES "/home/sj/Desktop/Robotics_yo/809Y/Move-the-turtlebot3-through-the-maze-as-per-the-ID-on-the-aruco-marker./turtlebot3_ws/src/lecture12/config")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/lecture12/broadcaster_demo" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/lecture12/broadcaster_demo")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/lecture12/broadcaster_demo"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/lecture12" TYPE EXECUTABLE FILES "/home/sj/Desktop/Robotics_yo/809Y/Move-the-turtlebot3-through-the-maze-as-per-the-ID-on-the-aruco-marker./turtlebot3_ws/build/lecture12/broadcaster_demo")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/lecture12/broadcaster_demo" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/lecture12/broadcaster_demo")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/lecture12/broadcaster_demo"
         OLD_RPATH "/home/sj/Desktop/Robotics_yo/809Y/Move-the-turtlebot3-through-the-maze-as-per-the-ID-on-the-aruco-marker./turtlebot3_ws/install/ros2_aruco_interfaces/lib:/home/sj/Desktop/Robotics_yo/809Y/Move-the-turtlebot3-through-the-maze-as-per-the-ID-on-the-aruco-marker./turtlebot3_ws/install/mage_msgs/lib:/opt/ros/galactic/lib:/opt/ros/galactic/lib/x86_64-linux-gnu:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/lecture12/broadcaster_demo")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/lecture12/broadcaster_demo" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/lecture12/broadcaster_demo")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/lecture12/broadcaster_demo"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/lecture12" TYPE EXECUTABLE FILES "/home/sj/Desktop/Robotics_yo/809Y/Move-the-turtlebot3-through-the-maze-as-per-the-ID-on-the-aruco-marker./turtlebot3_ws/build/lecture12/broadcaster_demo")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/lecture12/broadcaster_demo" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/lecture12/broadcaster_demo")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/lecture12/broadcaster_demo"
         OLD_RPATH "/home/sj/Desktop/Robotics_yo/809Y/Move-the-turtlebot3-through-the-maze-as-per-the-ID-on-the-aruco-marker./turtlebot3_ws/install/ros2_aruco_interfaces/lib:/home/sj/Desktop/Robotics_yo/809Y/Move-the-turtlebot3-through-the-maze-as-per-the-ID-on-the-aruco-marker./turtlebot3_ws/install/mage_msgs/lib:/opt/ros/galactic/lib:/opt/ros/galactic/lib/x86_64-linux-gnu:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/lecture12/broadcaster_demo")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/lecture12/" TYPE DIRECTORY FILES "/home/sj/Desktop/Robotics_yo/809Y/Move-the-turtlebot3-through-the-maze-as-per-the-ID-on-the-aruco-marker./turtlebot3_ws/src/lecture12/include")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/package_run_dependencies" TYPE FILE FILES "/home/sj/Desktop/Robotics_yo/809Y/Move-the-turtlebot3-through-the-maze-as-per-the-ID-on-the-aruco-marker./turtlebot3_ws/build/lecture12/ament_cmake_index/share/ament_index/resource_index/package_run_dependencies/lecture12")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/parent_prefix_path" TYPE FILE FILES "/home/sj/Desktop/Robotics_yo/809Y/Move-the-turtlebot3-through-the-maze-as-per-the-ID-on-the-aruco-marker./turtlebot3_ws/build/lecture12/ament_cmake_index/share/ament_index/resource_index/parent_prefix_path/lecture12")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/lecture12/environment" TYPE FILE FILES "/opt/ros/galactic/share/ament_cmake_core/cmake/environment_hooks/environment/ament_prefix_path.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/lecture12/environment" TYPE FILE FILES "/home/sj/Desktop/Robotics_yo/809Y/Move-the-turtlebot3-through-the-maze-as-per-the-ID-on-the-aruco-marker./turtlebot3_ws/build/lecture12/ament_cmake_environment_hooks/ament_prefix_path.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/lecture12/environment" TYPE FILE FILES "/opt/ros/galactic/share/ament_cmake_core/cmake/environment_hooks/environment/path.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/lecture12/environment" TYPE FILE FILES "/home/sj/Desktop/Robotics_yo/809Y/Move-the-turtlebot3-through-the-maze-as-per-the-ID-on-the-aruco-marker./turtlebot3_ws/build/lecture12/ament_cmake_environment_hooks/path.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/lecture12" TYPE FILE FILES "/home/sj/Desktop/Robotics_yo/809Y/Move-the-turtlebot3-through-the-maze-as-per-the-ID-on-the-aruco-marker./turtlebot3_ws/build/lecture12/ament_cmake_environment_hooks/local_setup.bash")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/lecture12" TYPE FILE FILES "/home/sj/Desktop/Robotics_yo/809Y/Move-the-turtlebot3-through-the-maze-as-per-the-ID-on-the-aruco-marker./turtlebot3_ws/build/lecture12/ament_cmake_environment_hooks/local_setup.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/lecture12" TYPE FILE FILES "/home/sj/Desktop/Robotics_yo/809Y/Move-the-turtlebot3-through-the-maze-as-per-the-ID-on-the-aruco-marker./turtlebot3_ws/build/lecture12/ament_cmake_environment_hooks/local_setup.zsh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/lecture12" TYPE FILE FILES "/home/sj/Desktop/Robotics_yo/809Y/Move-the-turtlebot3-through-the-maze-as-per-the-ID-on-the-aruco-marker./turtlebot3_ws/build/lecture12/ament_cmake_environment_hooks/local_setup.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/lecture12" TYPE FILE FILES "/home/sj/Desktop/Robotics_yo/809Y/Move-the-turtlebot3-through-the-maze-as-per-the-ID-on-the-aruco-marker./turtlebot3_ws/build/lecture12/ament_cmake_environment_hooks/package.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/packages" TYPE FILE FILES "/home/sj/Desktop/Robotics_yo/809Y/Move-the-turtlebot3-through-the-maze-as-per-the-ID-on-the-aruco-marker./turtlebot3_ws/build/lecture12/ament_cmake_index/share/ament_index/resource_index/packages/lecture12")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/lecture12/cmake" TYPE FILE FILES
    "/home/sj/Desktop/Robotics_yo/809Y/Move-the-turtlebot3-through-the-maze-as-per-the-ID-on-the-aruco-marker./turtlebot3_ws/build/lecture12/ament_cmake_core/lecture12Config.cmake"
    "/home/sj/Desktop/Robotics_yo/809Y/Move-the-turtlebot3-through-the-maze-as-per-the-ID-on-the-aruco-marker./turtlebot3_ws/build/lecture12/ament_cmake_core/lecture12Config-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/lecture12" TYPE FILE FILES "/home/sj/Desktop/Robotics_yo/809Y/Move-the-turtlebot3-through-the-maze-as-per-the-ID-on-the-aruco-marker./turtlebot3_ws/src/lecture12/package.xml")
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/sj/Desktop/Robotics_yo/809Y/Move-the-turtlebot3-through-the-maze-as-per-the-ID-on-the-aruco-marker./turtlebot3_ws/build/lecture12/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
