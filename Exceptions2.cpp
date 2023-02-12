#include <iostream>
#include <string>
#include "Figure.h"
#include "bad_fig.h"
#include "Triangle.h"
#include "EquiluteralTriangle.h"
#include "IsoscelesTriangle.h"
#include "RectTriangle.h"
#include "print_info.h"
#include <clocale>

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Russian");
    system("chcp 1251");
    try
    {
        Figure figure("Фигура", 0);
        print_info(&figure);
    }
    catch (const BadFig& bf)
    {
        std::cout << bf.what() << std::endl;
    }
    try
    {
        Triangle triangle("Треугольник", 30, 25, 35, 50, 40, 100);
        print_info(&triangle);
    }
    catch (const BadFig& bf)
    {
        std::cout << bf.what() << std::endl;
    }
    // катастрофа
    return 0;
}