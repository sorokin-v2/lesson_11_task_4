#include"square.h"

Square::Square(int new_a) :
    Rectangle(new_a, new_a)
{
    name = " вадрат";
}
bool Square::check() { return (A == 90 && B == 90 && C == 90 && D == 90 && a == b && b == c && c == d) ? true : false; }
