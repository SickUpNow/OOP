#include "Worker.h"

Worker::Worker(string n, string p)
{
    this->name = n;
    this->profession = p;
}

Worker::~Worker()
{
}

string Worker::getName()
{
    return this->name;
}

string Worker::getProfession()
{
    return this->profession;
}

void Worker::changeProfession(string p)
{
    this->profession = p;
}
