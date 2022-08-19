#pragma once
#include "figure.h"

#ifdef DYNAMICLIBRARYDYNAMIC_EXPORTS
#define DYNAMICLIBRARYDYNAMIC_EXPORTS __declspec(dllexport)
#else
#define DYNAMICLIBRARYDYNAMIC_EXPORTS __declspec(dllimport)
#endif

class Quadrangle : public Figure {
public:

    DYNAMICLIBRARYDYNAMIC_EXPORTS Quadrangle(int new_a, int new_b, int new_c, int new_d, int new_A, int new_B, int new_C, int new_D);
    DYNAMICLIBRARYDYNAMIC_EXPORTS virtual void print_info() override;

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

