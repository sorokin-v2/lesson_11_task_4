#include <iostream>
#include <string>
#include "figure.h"
#include "triangle.h"
#include "right_triangle.h"
#include "isosceles_triangle.h"
#include "equilateral_triangle.h"
#include "quadrangle.h"
#include "parallelogram.h"
#include "rectangle.h"
#include "rhomb.h"
#include"square.h"

int main()
{
    setlocale(LC_ALL, "Russian");
    Triangle triangle(10, 20, 30, 50, 60, 70);
    Right_triangle right_triangle(10, 20, 30, 50, 60);
    Isosceles_triangle isosceles_triangle(10, 20, 50, 60);
    Equilateral_triangle equilateral_triangle(30);

    Figure figure;
    Quadrangle quadrangle(10, 20, 30, 40, 50, 60, 70, 80);
    Parallelogram parallelogram(20, 30, 30, 40);
    Rectangle rectangle(10, 20);
    Rhomb rhomb(30, 30, 40);
    Square square(20);

    figure.print_info();
    std::cout << std::endl;
    triangle.print_info();
    std::cout << std::endl;
    right_triangle.print_info();
    std::cout << std::endl;
    isosceles_triangle.print_info();
    std::cout << std::endl;
    equilateral_triangle.print_info();
    std::cout << std::endl;
    quadrangle.print_info();
    std::cout << std::endl;
    rectangle.print_info();
    std::cout << std::endl;
    square.print_info();
    std::cout << std::endl;
    parallelogram.print_info();
    std::cout << std::endl;
    rhomb.print_info();
}
