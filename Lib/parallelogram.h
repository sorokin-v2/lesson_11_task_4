#pragma once
#include "quadrangle.h"

#ifdef DYNAMICLIBRARYDYNAMIC_EXPORTS
#define DYNAMICLIBRARYDYNAMIC_EXPORTS __declspec(dllexport)
#else
#define DYNAMICLIBRARYDYNAMIC_EXPORTS __declspec(dllimport)
#endif

class Parallelogram : public Quadrangle {
public:
    DYNAMICLIBRARYDYNAMIC_EXPORTS Parallelogram(int new_a, int new_b, int new_A, int new_B);
protected:
    virtual bool check()  override;
};

