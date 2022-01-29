cmake_minimum_required(VERSION 3.22)
project(tryVulkanCMake)

set(CMAKE_CXX_STANDARD 23)

include_directories(/usr/local/include)
include_directories(../Vulkan/external)
include_directories(../Vulkan/external/glm)
include_directories(../Vulkan/external/gli)
include_directories(../Vulkan/external/imgui)
include_directories(../Vulkan/external/tinygltf)
include_directories(../Vulkan/external/ktx/include)
include_directories(../Vulkan/external/ktx/other_include)

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


#  !!target_link_libraries!! /usr/local/lib/libvulkan.dylib
# /usr/local/lib/libglfw.3.4.dylib