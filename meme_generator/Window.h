#pragma once
#include "raylib.h"
#include <string>

class Window
{

private:
    const unsigned int screenWidth;
    const unsigned int screenHeight;
    const std::string windowName;

public:
    Window(unsigned int, unsigned int, std::string);
    void runProgram();


};

