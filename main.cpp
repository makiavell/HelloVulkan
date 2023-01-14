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
#include "SampleRenderer/SampleRenderer.h"

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

class SimpleApp
{
public:
    SimpleApp()
    {
        window = makeWindow();
        // renderer = std::make_unique<HelloTriangleRenderer>(*window);
        renderer = std::make_unique<SampleRenderer>(*window);
    }

    void run()
    {
        while (!glfwWindowShouldClose(window))
        {
            glfwPollEvents();
            renderer->render();
        }
        // cleanup();
    }

private:
    static GLFWwindow* makeWindow()
    {
        glfwInit();
        glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
        glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);
        auto window = glfwCreateWindow(WIDTH, HEIGHT, "Vulkan", nullptr, nullptr);
        return window;
    }

private:
    std::unique_ptr<IRenderer> renderer;
    GLFWwindow* window;
};


int main() {
    SimpleApp app;

    SimplePoint awesomePoint{1,2,3};

    fmt::print("Hello! This is {}! \n", "fmtlib");

    try {
        app.run();
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}
