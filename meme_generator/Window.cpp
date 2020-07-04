#include "Window.h"

Window::Window(unsigned int w, unsigned int h, std::string wN) 
    : screenWidth(w), screenHeight(h), windowName(wN)
{
    InitWindow(screenWidth, screenHeight, wN.c_str());

    SetTargetFPS(60);
}

void Window::runProgram()
{

    Vector2 ballPosition{ this->screenWidth/2, this->screenHeight/2 };

    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(Color{ 34,34,34 });
        this->drawAllThings();
        EndDrawing();
    }
    
    CloseWindow(); 
}

void Window::drawAllThings()
{
    DrawRectangle(0, 0, (float)(this->screenWidth / 4), this->screenHeight, Color{18, 18, 18,100});
}

void Window::loadAllThings()
{
   
}
