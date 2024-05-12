#include "Zoo.h"

Zoo::Zoo()
{
    this->workers.resize(0);
    this->expositions.resize(0);
}

Zoo::~Zoo()
{
    for(auto worker : workers) {
        delete worker;
    }
    for(auto exposition : expositions) {
        delete exposition;
    }
}

Worker *Zoo::getWorker(int w)
{
    if(w >= 0 && w < workers.size()) {
        return this->workers[w];
    }
    return nullptr;
}

int Zoo::getWorkerCount()
{
    return this->workers.size();
}

Exposition *Zoo::getExposition(int e)
{
    if(e >= 0 && e < expositions.size()) {
        return this->expositions[e];
    }
    return nullptr;
}

int Zoo::getExpositionsCount()
{
    return this->expositions.size();
}

void Zoo::addWorker(string n, string p)
{
    Worker* newWorker = new Worker(n,p);
    workers.push_back(newWorker);
}

void Zoo::addWorker(Worker * w)
{
    workers.push_back(w);
}

void Zoo::removeWorker(int w)
{
    if(w >= 0 && w < workers.size()) {
        delete workers[w];
        workers.erase(workers.begin() + w);
    }
}

void Zoo::addExposition(string n)
{
    Exposition* newExposition = new Exposition(n);
    expositions.push_back(newExposition);
}

void Zoo::addExposition(Exposition *e)
{
    expositions.push_back(e);
}

void Zoo::removeExposition(int e)
{
    if(e >= 0 && e < expositions.size()) {
        delete expositions[e];
        expositions.erase(expositions.begin() + e);
    }
}
