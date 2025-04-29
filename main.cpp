#include <GLFW/glfw3.h>
#include<cmath>
int main()
{

	float time = glfwGetTime();
	if (!glfwInit())
	{
		goto clear;
	}
	GLFWwindow* window;
	window = glfwCreateWindow(800, 800, "test", nullptr, nullptr);
	//int a, b, c, d;
	while (!glfwWindowShouldClose(window))
	{
		glfwPollEvents();

		glClear(GL_COLOR_BUFFER_BIT);
		glfwSwapBuffers(window);

		glfwMakeContextCurrent(window);
	}
	//glfwMakeContextCurrent(window);
	glfwTerminate();
	return 0;
clear:
	return -1;
	glfwTerminate();
}