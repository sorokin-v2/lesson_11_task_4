#pragma once
#include "parallelogram.h"

#ifdef Lib_EXPORTS                                          //��� � ������� �����!!! � ������� ���������� DLL Visual Studio ������������� ���������� ������ <����������>_EXPORTS
#define DYNAMICLIBRARYDYNAMIC_API __declspec(dllimport)
#else
#define DYNAMICLIBRARYDYNAMIC_API __declspec(dllexport)
#endif

class Rhomb : public Parallelogram {
public:
    DYNAMICLIBRARYDYNAMIC_API Rhomb(int new_a, int new_A, int new_B);

protected:
    virtual bool check()  override;
};

