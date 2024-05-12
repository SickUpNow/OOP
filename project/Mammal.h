#pragma once
#include <string>
#include "Animal.h"

using namespace std;
//classy

class Mammal : public Animal {
private:
    int speed;

public:
    Mammal(string s, int a, int sp);
    virtual ~Mammal();

    // gettery
    virtual int getSpeed();

    // funkce
    virtual string printInfo() ;
    virtual string printSpecific1();
    virtual string printSpecific2();
};