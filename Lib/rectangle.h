#pragma once
#include "parallelogram.h"

#ifdef DYNAMICLIBRARYDYNAMIC_EXPORTS
#define DYNAMICLIBRARYDYNAMIC_EXPORTS __declspec(dllexport)
#else
#define DYNAMICLIBRARYDYNAMIC_EXPORTS __declspec(dllimport)
#endif

class Rectangle : public Parallelogram {
public:
    DYNAMICLIBRARYDYNAMIC_EXPORTS Rectangle(int new_a, int new_b);

protected:
    virtual bool check()  override;
};

