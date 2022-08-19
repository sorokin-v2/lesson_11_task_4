#pragma once
#include <string>

#ifdef DYNAMICLIBRARYDYNAMIC_EXPORTS
#define DYNAMICLIBRARYDYNAMIC_EXPORTS __declspec(dllexport)
#else
#define DYNAMICLIBRARYDYNAMIC_EXPORTS __declspec(dllimport)
#endif


class Figure {
public:
    DYNAMICLIBRARYDYNAMIC_EXPORTS Figure();
    DYNAMICLIBRARYDYNAMIC_EXPORTS virtual void print_info();
protected:
    virtual bool check();

    std::string name;
    int sides_count;
};

