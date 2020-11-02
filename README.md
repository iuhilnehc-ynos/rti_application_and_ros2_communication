# Environment

- Operating System:
  - Ubuntu 20.04

- ROS2 version:
  - foxy

- DDS implementation:
  - rmw_connext_cpp

# Build & Test

1. source rti setenv_ros2rti.bash file

    `source /opt/rti.com/rti_connext_dds-5.3.1/setenv_ros2rti.bash`

2. build

    `make -f makefile_string_x64Linux3gcc5.4.0`

3. run test

    ```
    // terminal 1
    $ ./objs/x64Linux3gcc5.4.0/string_publisher
    Writing std_msgs::msg::dds_::String_, count 0
    Writing std_msgs::msg::dds_::String_, count 1
    Writing std_msgs::msg::dds_::String_, count 2
    Writing std_msgs::msg::dds_::String_, count 3
    Writing std_msgs::msg::dds_::String_, count 4
    Writing std_msgs::msg::dds_::String_, count 5
    Writing std_msgs::msg::dds_::String_, count 6
    Writing std_msgs::msg::dds_::String_, count 7
    Writing std_msgs::msg::dds_::String_, count 8
    Writing std_msgs::msg::dds_::String_, count 9


    // terminal 2
    $ ./objs/x64Linux3gcc5.4.0/string_subscriber
    <...>
    [data_: 7]
    [data_: 8]
    [data_: 9]
    ```

4. run ros2 example

    - ros2 subscriber can receive data from string_publisher

    ```
    // terminal 1
    $ ./objs/x64Linux3gcc5.4.0/string_publisher
    Writing std_msgs::msg::dds_::String_, count 0
    Writing std_msgs::msg::dds_::String_, count 1
    Writing std_msgs::msg::dds_::String_, count 2
    Writing std_msgs::msg::dds_::String_, count 3
    Writing std_msgs::msg::dds_::String_, count 4
    Writing std_msgs::msg::dds_::String_, count 5
    Writing std_msgs::msg::dds_::String_, count 6
    Writing std_msgs::msg::dds_::String_, count 7
    Writing std_msgs::msg::dds_::String_, count 8

    // terminal 2
    $ RMW_IMPLEMENTATION=rmw_connext_cpp ros2 topic echo chatter std_msgs/String
    <...>
    data: '7'
    ---
    data: '8'
    ---
    ```

    - but string_subscriber can not receive data from ros2 publisher

    ```
    // terminal 1
    $ ./objs/x64Linux3gcc5.4.0/string_subscriber
    <no data>

    // terminal 2
    $ RMW_IMPLEMENTATION=rmw_connext_cpp ros2 topic pub chatter std_msgs/String 'data: hello world'
    publisher: beginning loop
    publishing #1: std_msgs.msg.String(data='hello world')
    
    publishing #2: std_msgs.msg.String(data='hello world')
    
    publishing #3: std_msgs.msg.String(data='hello world')
    <...>
    ```

