#include <GLFW/glfw3.h> // 假设找到的是 GLFW 库
int main() {
    glfwInit();
    GLFWwindow* window = glfwCreateWindow(640, 480, "114514", NULL, NULL);
    while (!glfwWindowShouldClose(window)) {
        glfwSwapBuffers(window);
        glfwPollEvents();
    }
    glfwTerminate();
}