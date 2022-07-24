cmake_minimum_required(VERSION 3.22)
project(tryVulkanCMake)

set(CMAKE_CXX_STANDARD 23)

# includes:
## system
include_directories(/usr/local/include)

## homebrew
include_directories(/opt/homebrew/include/)

## vulkan
include_directories(../Vulkan/external)
include_directories(../Vulkan/external/glm)
include_directories(../Vulkan/external/gli)
include_directories(../Vulkan/external/imgui)
include_directories(../Vulkan/external/tinygltf)
include_directories(../Vulkan/external/ktx/include)
include_directories(../Vulkan/external/ktx/other_include)

# libraries:
## this must be set BEFORE `add_executable`
link_directories(/usr/local/lib)

set(VK_SOURCES
        main.cpp
        sample.h
        hello_triangle.h
        hello_triangle.cpp
        )

add_executable(tryVulkanCMake ${VK_SOURCES})

target_link_libraries(tryVulkanCMake libvulkan.dylib)
target_link_libraries(tryVulkanCMake libglfw.3.4.dylib)

# add fmt lib
# /opt/homebrew/Cellar/fmt/8.1.1_1
find_package(fmt)
target_link_libraries(tryVulkanCMake fmt::fmt)



#  !!target_link_libraries!! /usr/local/lib/libvulkan.dylib
# /usr/local/lib/libglfw.3.4.dylib