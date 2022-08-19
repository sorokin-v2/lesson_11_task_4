#pragma once
#include "triangle.h"

#ifdef DYNAMICLIBRARYDYNAMIC_EXPORTS
#define DYNAMICLIBRARYDYNAMIC_EXPORTS __declspec(dllexport)
#else
#define DYNAMICLIBRARYDYNAMIC_EXPORTS __declspec(dllimport)
#endif

class Equilateral_triangle : public Triangle {
public:
    DYNAMICLIBRARYDYNAMIC_EXPORTS Equilateral_triangle(int new_a);
protected:
    bool check()  override;

};

