#include <iostream>
#include <GLFW/glfw3.h>

int main()
{
    if (!glfwInit())
    {
        std::cout << "Failed to initialize GLFW\n";
        return -1;
    }

    std::cout << "GLFW Initialized Successfully\n";

    GLFWwindow* window = glfwCreateWindow(
        1920,
        1080,
        "My First Game",
        nullptr,
        nullptr
    );
}