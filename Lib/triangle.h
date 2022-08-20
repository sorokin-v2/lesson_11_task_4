#pragma once
#include "figure.h"

#ifdef Lib_EXPORTS                                          //��� � ������� �����!!! � ������� ���������� DLL Visual Studio ������������� ���������� ������ <����������>_EXPORTS
#define DYNAMICLIBRARYDYNAMIC_API __declspec(dllimport)
#else
#define DYNAMICLIBRARYDYNAMIC_API __declspec(dllexport)
#endif

class Triangle : public Figure {
public:
    DYNAMICLIBRARYDYNAMIC_API Triangle(int new_a, int new_b, int new_c, int new_A, int new_B, int new_C);
    DYNAMICLIBRARYDYNAMIC_API virtual void print_info() override;

protected:
    virtual bool check()  override;

    int a;
    int b;
    int c;
    int A;
    int B;
    int C;
};

