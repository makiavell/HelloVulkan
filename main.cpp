#include <iostream>

// #include "vulkan/vulkan.h"
#include <vector>

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

#define GLM_FORCE_RADIANS
#define GLM_FORCE_DEPTH_ZERO_TO_ONE
#include <glm/vec4.hpp>
#include <glm/mat4x4.hpp>

#include "hello_triangle.h"

class SimplePoint
{
public:
    float x;
    float y;
public:
    SimplePoint() = default;
    SimplePoint(float _x, float _y, int d) : x(_x), y(_x), privateData(d){}
private:
    int privateData;
};

int main() {
    HelloTriangleApplication app;

    SimplePoint awesomePoint{1,2,3};

    try {
        app.run();
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}
