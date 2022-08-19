#pragma once
#include "parallelogram.h"

#ifdef DYNAMICLIBRARYDYNAMIC_EXPORTS
#define DYNAMICLIBRARYDYNAMIC_EXPORTS __declspec(dllexport)
#else
#define DYNAMICLIBRARYDYNAMIC_EXPORTS __declspec(dllimport)
#endif

class Rhomb : public Parallelogram {
public:
    DYNAMICLIBRARYDYNAMIC_EXPORTS Rhomb(int new_a, int new_A, int new_B);

protected:
    virtual bool check()  override;
};

