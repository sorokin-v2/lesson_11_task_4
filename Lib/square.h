#pragma once
#include "rectangle.h"

#ifdef Lib_EXPORTS                                          //ИМЯ И РЕГИСТР ВАЖНЫ!!! в проекте библиотеки DLL Visual Studio автоматически определяет макрос <ИМЯПРОЕКТА>_EXPORTS
#define DYNAMICLIBRARYDYNAMIC_API __declspec(dllimport)
#else
#define DYNAMICLIBRARYDYNAMIC_API __declspec(dllexport)
#endif

class Square : public Rectangle {
public:
    DYNAMICLIBRARYDYNAMIC_API Square(int new_a);

protected:
    virtual bool check()  override;

};

