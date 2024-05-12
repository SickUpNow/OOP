#pragma once

using namespace std;
//classy

class Printable {
public:
    virtual string printInfo() = 0;
    virtual string printSpecific1() = 0;
    virtual string printSpecific2() = 0;
};