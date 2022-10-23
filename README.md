

## What is going on?

I follow [this](https://vulkan-tutorial.com/) tutorial.

## Setup

[Here](https://vulkan-tutorial.com/Development_environment#page_MacOS). Vulkan SDK internally uses MoltenVK. We do not need to install it explicitly.

* Install Vulkan SDK:
    * Download it here https://vulkan.lunarg.com/
    * Unpack and run the installation script. I am not fully sure about that anymore :( 
*  `brew install glfw`
*  `brew install glm`




## Notes

File extension is important for glslc (shader compiler from google).

Using fmtlib:
* `brew install fmt`
* ```cmake
  find_package(fmt)
  target_link_libraries(tryVulkanCMake fmt::fmt)
  ```
  


## Some Other Link
* [Habr](https://habr.com/ru/post/462137/) collection of links + 1 lesson in 
russian
* [Vulkan-Hpp](https://github.com/KhronosGroup/Vulkan-Hpp) C++ wrappers
* [C++ Examples](https://github.com/jherico/vulkan) of SaschaWillems/Vulkan