#include "rectangle.h"

Rectangle::Rectangle(int new_a, int new_b) :
    Parallelogram(new_a, new_b, 90, 90)
{
    name = "Прямоугольник";
}
bool Rectangle::check() { return (A == 90 && B == 90 && C == 90 && D == 90 && a == c && b == d) ? true : false; }
