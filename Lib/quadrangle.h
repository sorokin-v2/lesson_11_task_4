#pragma once
#include "figure.h"

#ifdef Lib_EXPORTS                                          //ИМЯ И РЕГИСТР ВАЖНЫ!!! в проекте библиотеки DLL Visual Studio автоматически определяет макрос <ИМЯПРОЕКТА>_EXPORTS
#define DYNAMICLIBRARYDYNAMIC_API __declspec(dllimport)
#else
#define DYNAMICLIBRARYDYNAMIC_API __declspec(dllexport)
#endif

class Quadrangle : public Figure {
public:

    DYNAMICLIBRARYDYNAMIC_API Quadrangle(int new_a, int new_b, int new_c, int new_d, int new_A, int new_B, int new_C, int new_D);
    DYNAMICLIBRARYDYNAMIC_API virtual void print_info() override;

protected:
    virtual bool check()  override;

    int a;
    int b;
    int c;
    int d;
    int A;
    int B;
    int C;
    int D;
};

