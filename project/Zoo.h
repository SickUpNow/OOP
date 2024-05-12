#pragma once
#include "Worker.h"
#include "Exposition.h"

using namespace std;
//classy

class Zoo {
private:
    vector<Worker*> workers;
    vector<Exposition*> expositions;

public:
    Zoo();
    ~Zoo();
    
    // getery
    Worker* getWorker(int w);
    int getWorkerCount();
    Exposition* getExposition(int e);
    int getExpositionsCount();
    
    // funkce
    void addWorker(string n, string p);
    void addWorker(Worker* w);
    void removeWorker(int w);
    void addExposition(string n);
    void addExposition(Exposition* e);
    void removeExposition(int e);
};