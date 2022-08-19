#include "equilateral_triangle.h"

Equilateral_triangle::Equilateral_triangle(int new_a) :
        Triangle(new_a, new_a, new_a, 60, 60, 60)
    {
        name = "Равносторонний треугольник";
    }
bool Equilateral_triangle::check() { return (A == 60 && B == 60 && C == 60 && a == b && b == c) ? true : false; }
