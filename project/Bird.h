#pragma once
#include <string>
#include "Animal.h"

using namespace std;
//classy

class Bird : public Animal {
private:
    int maxHeight;

public:
    Bird(string s, int a, int m);
    virtual ~Bird();

    // gettery
    virtual int getHeight();

    // funkce
    virtual string printInfo() ;
    virtual string printSpecific1();
    virtual string printSpecific2();
};