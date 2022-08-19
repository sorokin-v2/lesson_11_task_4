#include "parallelogram.h"

Parallelogram::Parallelogram(int new_a, int new_b, int new_A, int new_B) :
    Quadrangle(new_a, new_b, new_a, new_b, new_A, new_B, new_A, new_B)
{
    name = "ֿאנאככוכמדנאלל";
}

bool Parallelogram::check() { return ((A + B + C + D) == 360 && a == c && b == d && A == C && B == D) ? true : false; }

