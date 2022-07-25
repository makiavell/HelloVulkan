cmake_minimum_required(VERSION 3.22)
project(HelloVulkan)

set(CMAKE_CXX_STANDARD 23)

# includes:
## system
include_directories(/usr/local/include)

## homebrew
include_directories(/opt/homebrew/include/)

## vulkan
set(VULKAN_SDK_DIR ../../Vulkan)
include_directories(${VULKAN_SDK_DIR}/external)
include_directories(${VULKAN_SDK_DIR}/external/glm)
include_directories(${VULKAN_SDK_DIR}/external/gli)
include_directories(${VULKAN_SDK_DIR}/external/imgui)
include_directories(${VULKAN_SDK_DIR}/external/tinygltf)
include_directories(${VULKAN_SDK_DIR}/external/ktx/include)
include_directories(${VULKAN_SDK_DIR}/external/ktx/other_include)

# libraries:
## this must be set BEFORE `add_executable`
link_directories(/usr/local/lib)

set(VK_SOURCES
        main.cpp
        sample.h
        hello_triangle.h
        hello_triangle.cpp
        )

add_executable(HelloVulkan ${VK_SOURCES})

target_link_libraries(HelloVulkan libvulkan.dylib)
target_link_libraries(HelloVulkan libglfw.3.4.dylib)

# add fmt lib
# /opt/homebrew/Cellar/fmt/8.1.1_1
find_package(fmt)
target_link_libraries(HelloVulkan fmt::fmt)



#  !!target_link_libraries!! /usr/local/lib/libvulkan.dylib
# /usr/local/lib/libglfw.3.4.dylib