#pragma once
#include "triangle.h"

#ifdef DYNAMICLIBRARYDYNAMIC_EXPORTS
#define DYNAMICLIBRARYDYNAMIC_EXPORTS __declspec(dllexport)
#else
#define DYNAMICLIBRARYDYNAMIC_EXPORTS __declspec(dllimport)
#endif


class Right_triangle : public Triangle {
public:
    DYNAMICLIBRARYDYNAMIC_EXPORTS Right_triangle(int new_a, int new_b, int new_c, int new_A, int new_B);
protected:
    virtual bool check()  override;

};

