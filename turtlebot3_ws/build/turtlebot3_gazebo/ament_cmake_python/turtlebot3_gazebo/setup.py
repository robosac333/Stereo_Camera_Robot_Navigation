import os
from setuptools import find_packages
from setuptools import setup

setup(
    name='turtlebot3_gazebo',
    version='2.2.4',
    packages=find_packages(
        include=('turtlebot3_gazebo', 'turtlebot3_gazebo.*')),
)
