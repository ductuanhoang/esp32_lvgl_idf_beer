# The following lines of boilerplate have to be in your project's CMakeLists
# in this exact order for cmake to work correctly
cmake_minimum_required(VERSION 3.16)

message("***** START ********************************")
message("${PROJECT_SOURCE_DIR}")

# Include additional local components
set(EXTRA_COMPONENT_DIRS "")
list(APPEND EXTRA_COMPONENT_DIRS "${CMAKE_CURRENT_SOURCE_DIR}/components/common/cmd_nvs")
list(APPEND EXTRA_COMPONENT_DIRS "${CMAKE_CURRENT_SOURCE_DIR}/components/common/cmd_system")

include($ENV{IDF_PATH}/tools/cmake/project.cmake)
project(uart_events)

