#include "quadrangle.h"
#include <iostream>

Quadrangle::Quadrangle(int new_a, int new_b, int new_c, int new_d, int new_A, int new_B, int new_C, int new_D) :
        a{ new_a }, b{ new_b }, c{ new_c }, d{ new_d }, A{ new_A }, B{ new_B }, C{ new_C }, D{ new_D }
{
    name = "Четырёхугольник";
    sides_count = 4;
}

void Quadrangle::print_info()
{
    Figure::print_info();
    std::cout << "Стононы: a=" << a << " b=" << b << " c=" << c << " d=" << d << "\n" <<
        "Углы: A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl;
}

bool Quadrangle::check() { return (A + B + C + D) == 360 ? true : false; }
