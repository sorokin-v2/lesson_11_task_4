#pragma once
#include <string>

#ifdef Lib_EXPORTS                                          //ИМЯ И РЕГИСТР ВАЖНЫ!!! в проекте библиотеки DLL Visual Studio автоматически определяет макрос <ИМЯПРОЕКТА>_EXPORTS
#define DYNAMICLIBRARYDYNAMIC_API __declspec(dllimport)
#else
#define DYNAMICLIBRARYDYNAMIC_API __declspec(dllexport)
#endif


class Figure {
public:
    DYNAMICLIBRARYDYNAMIC_API Figure();
    DYNAMICLIBRARYDYNAMIC_API virtual void print_info();
protected:
    virtual bool check();

    std::string name;
    int sides_count;
};

