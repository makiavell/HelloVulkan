# HelloVulkan
learning vulkan


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
  