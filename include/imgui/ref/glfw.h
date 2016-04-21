/*
    ImGui GLFW binding with OpenGL 2.0
    In this binding, ImTextureID is used to store an OpenGL 'GLuint'
    texture identifier. Read the FAQ about ImTextureID in imgui.cpp.
    
    You can copy and use unmodified imgui_impl_* files in your project.
    See main.cpp for an example of using this. If you use this binding
    you'll need to call 4 functions: ImGui_ImplXXXX_Init(),
    ImGui_ImplXXXX_NewFrame(), ImGui::Render() and ImGui_ImplXXXX_Shutdown().
    If you are new to ImGui, see examples/README.txt and documentation at 
    the top of imgui.cpp. https://github.com/ocornut/imgui.
*/

#include "imgui/imgui_internal.h"

struct GLFWwindow;

IMGUI_API bool        Init(GLFWwindow* window, bool install_callbacks=true);
IMGUI_API void        Shutdown();
IMGUI_API void        NewFrame();

// Use if you want to reset your rendering device without losing ImGui state.
IMGUI_API void        InvalidateDeviceObjects();
IMGUI_API bool        CreateDeviceObjects();

// GLFW callbacks (insTalled by default if you enable 'install_callbacks' during initialization)
// Provided here if yoU want to chain callbacks.
// You can also handle inputs yourself and use those as a reference.
IMGUI_API void        MouseButtonCallback(GLFWwindow* window, int button, int action, int mods);
IMGUI_API void        ScrollCallback(GLFWwindow* window, double xoffset, double yoffset);
IMGUI_API void        KeyCallback(GLFWwindow* window, int key, int scancode, int action, int mods);
IMGUI_API void        CharCallback(GLFWwindow* window, unsigned int c);
