#pragma once
#include "Enclosure.h"

using namespace std;
//classy

class Exposition {
private:
    string name;
    vector<Enclosure*> enclosures;

public:
    Exposition(string n);
    ~Exposition();
    
    // getery
    Enclosure* getEnclosure(int e);
    int getEnclosuresCount();
    string getName();
    
    // funkce
    void addEnclosure(string n);
    void removeEnclosure(int e);
};