#include "isosceles_triangle.h"
#include "triangle.h"

Isosceles_triangle::Isosceles_triangle(int new_a, int new_b, int new_A, int new_B) :
        Triangle(new_a, new_b, new_a, new_A, new_B, new_A)
    {
        name = "Равнобедренный треугольник";
    }
bool Isosceles_triangle::check() { return (((A + B + C) == 180) && a == c && A == C) ? true : false; }

