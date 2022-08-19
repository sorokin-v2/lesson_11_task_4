#include "figure.h"
#include <iostream>

Figure::Figure()
{
    name = "Фигура";
    sides_count = 0;
}

void Figure::print_info()
{
    std::cout << name << ": \n" << (check() ? "Правильная" : "Неправильная") << "\nКоличество сторон: " <<
    sides_count << std::endl;
}

bool Figure::check() { return true; }
