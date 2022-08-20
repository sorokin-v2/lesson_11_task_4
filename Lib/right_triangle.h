#pragma once
#include "triangle.h"

#ifdef Lib_EXPORTS                                          //��� � ������� �����!!! � ������� ���������� DLL Visual Studio ������������� ���������� ������ <����������>_EXPORTS
#define DYNAMICLIBRARYDYNAMIC_API __declspec(dllimport)
#else
#define DYNAMICLIBRARYDYNAMIC_API __declspec(dllexport)
#endif


class Right_triangle : public Triangle {
public:
    DYNAMICLIBRARYDYNAMIC_API Right_triangle(int new_a, int new_b, int new_c, int new_A, int new_B);
protected:
    virtual bool check()  override;

};

