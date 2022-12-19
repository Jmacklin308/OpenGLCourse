#include <glfw3.h>
#include <iostream>

int main(int argc, char* argv[])
{
    
    glfwInit();
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR,3);
    glfwWindowHint(GLFW_OPENGL_PROFILE,GLFW_OPENGL_CORE_PROFILE);



    GLFWwindow* window = glfwCreateWindow(1280,720, "OpenGL",NULL,NULL);
    

    if (window == NULL)
    {
        std::cout << "Failed to create GLFW window" << std::endl;
        glfwTerminate();
        return -1;
    }
    glfwMakeContextCurrent(window);



    glViewport(0, 0, 1280, 720);

    
    return 0;
}
