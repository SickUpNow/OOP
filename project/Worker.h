#pragma once
#include <string>

using namespace std;
//classy

class Worker {
private:
    string name;
    string profession;

public:
    Worker(string n, string p);
    ~Worker();
    
    // getery
    string getName();
    string getProfession();
    
    // funkce
    void changeProfession(string p);
};