#include <GLFW/glfw3.h> // �����ҵ����� GLFW ��
int main() {
    glfwInit();
    GLFWwindow* window = glfwCreateWindow(640, 480, "114514", NULL, NULL);
    while (!glfwWindowShouldClose(window)) {
        glfwSwapBuffers(window);
        glfwPollEvents();
    }
    glfwTerminate();
}