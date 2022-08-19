#include "rhomb.h"

Rhomb::Rhomb(int new_a, int new_A, int new_B) :
    Parallelogram(new_a, new_a, new_A, new_B)
{
    name = "Ромб";
}
bool Rhomb::check() { return ((A + B + C + D) == 360 && a == b && b == c && c == d && A == C && B == D) ? true : false; }
