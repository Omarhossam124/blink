# Set minimum required version of CMake
cmake_minimum_required(VERSION 3.12)

# Include build functions from Pico SDK
include($ENV{PICO_SDK_PATH}/external/pico_sdk_import.cmake)

# Set name of project (as PROJECT_NAME) and C/C++ standards
project(doorbell C CXX ASM)
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

# Initialize the Pico SDK
pico_sdk_init()

# Add source files
add_executable(${PROJECT_NAME} 
    main.c
)

# Include WiFiNINA library
add_library(WiFiNINA STATIC lib/WiFiNINA/src)
target_include_directories(WiFiNINA PUBLIC lib/WiFiNINA/src)

# Link necessary libraries to the project
target_link_libraries(${PROJECT_NAME} 
    pico_stdlib      # GPIO, timing, etc.
    WiFiNINA         # WiFiNINA library for Wi-Fi functionality
)

# Enable USB output, disable UART output
pico_enable_stdio_usb(${PROJECT_NAME} 1)
pico_enable_stdio_uart(${PROJECT_NAME} 0)

# Create map/bin/hex/uf2 files
pico_add_extra_outputs(${PROJECT_NAME})
