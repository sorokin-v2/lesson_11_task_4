#pragma once
#include "quadrangle.h"

#ifdef Lib_EXPORTS                                          //��� � ������� �����!!! � ������� ���������� DLL Visual Studio ������������� ���������� ������ <����������>_EXPORTS
#define DYNAMICLIBRARYDYNAMIC_API __declspec(dllimport)
#else
#define DYNAMICLIBRARYDYNAMIC_API __declspec(dllexport)
#endif

class Parallelogram : public Quadrangle {
public:
    DYNAMICLIBRARYDYNAMIC_API Parallelogram(int new_a, int new_b, int new_A, int new_B);
protected:
    virtual bool check()  override;
};

