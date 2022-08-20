#pragma once
#include "parallelogram.h"

#ifdef Lib_EXPORTS                                          //ИМЯ И РЕГИСТР ВАЖНЫ!!! в проекте библиотеки DLL Visual Studio автоматически определяет макрос <ИМЯПРОЕКТА>_EXPORTS
#define DYNAMICLIBRARYDYNAMIC_API __declspec(dllimport)
#else
#define DYNAMICLIBRARYDYNAMIC_API __declspec(dllexport)
#endif

class Rectangle : public Parallelogram {
public:
    DYNAMICLIBRARYDYNAMIC_API Rectangle(int new_a, int new_b);

protected:
    virtual bool check()  override;
};

