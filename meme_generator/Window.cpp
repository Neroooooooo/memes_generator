#include "Window.h"

Window::Window(unsigned int w, unsigned int h, std::string wN) 
    : screenWidth(w), screenHeight(h), windowName(wN)
{
    InitWindow(screenWidth, screenHeight, wN.c_str());

    SetTargetFPS(60);
}

void Window::runProgram()
{
    while (!WindowShouldClose())
    {
        BeginDrawing();


        ClearBackground(Color{ 34,34,34 });

        DrawText("Congrats! You created your first window!", 190, 200, 20, LIGHTGRAY);

        EndDrawing();
    }

    CloseWindow(); 
}
