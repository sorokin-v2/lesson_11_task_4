#pragma once
#include "triangle.h"

#ifdef Lib_EXPORTS                                          //��� � ������� �����!!! � ������� ���������� DLL Visual Studio ������������� ���������� ������ <����������>_EXPORTS
#define DYNAMICLIBRARYDYNAMIC_API __declspec(dllimport)
#else
#define DYNAMICLIBRARYDYNAMIC_API __declspec(dllexport)
#endif

class Equilateral_triangle : public Triangle {
public:
    DYNAMICLIBRARYDYNAMIC_API Equilateral_triangle(int new_a);
protected:
    bool check()  override;
};

