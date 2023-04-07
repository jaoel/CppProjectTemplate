#include <GLFW/glfw3.h>

int main() {
    glfwInit();

    GLFWwindow* window = glfwCreateWindow(640, 480, "Sample Project", NULL, NULL);
    if (window) {
        while (!glfwWindowShouldClose(window)) {
            glfwPollEvents();
        }
        glfwDestroyWindow(window);
    }
    glfwTerminate();

    return 0;
}