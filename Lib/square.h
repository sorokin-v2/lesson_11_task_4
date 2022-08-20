#pragma once
#include "rectangle.h"

#ifdef Lib_EXPORTS                                          //��� � ������� �����!!! � ������� ���������� DLL Visual Studio ������������� ���������� ������ <����������>_EXPORTS
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

