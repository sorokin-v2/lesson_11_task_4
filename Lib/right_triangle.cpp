#include "right_triangle.h"

Right_triangle::Right_triangle(int new_a, int new_b, int new_c, int new_A, int new_B) :
        Triangle(new_a, new_b, new_c, new_A, new_B, 90)
    {
        name = "Прямоугольный треугольник";
    }
bool Right_triangle::check() { return ((A + B) == 90 && C == 90) ? true : false; }
