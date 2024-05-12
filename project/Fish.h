#pragma once
#include <string>
#include "Animal.h"

using namespace std;
//classy

class Fish : public Animal {
private:
    int maxDepth;

public:
    Fish(string s, int a, int m);
    virtual ~Fish();

    // gettery
    virtual int getDepth();

    // funkce
    virtual string printInfo() ;
    virtual string printSpecific1();
    virtual string printSpecific2();
};