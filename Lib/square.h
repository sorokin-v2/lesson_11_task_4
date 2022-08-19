#pragma once
#include "rectangle.h"

#ifdef DYNAMICLIBRARYDYNAMIC_EXPORTS
#define DYNAMICLIBRARYDYNAMIC_EXPORTS __declspec(dllexport)
#else
#define DYNAMICLIBRARYDYNAMIC_EXPORTS __declspec(dllimport)
#endif

class Square : public Rectangle {
public:
    DYNAMICLIBRARYDYNAMIC_EXPORTS Square(int new_a);

protected:
    virtual bool check()  override;

};

