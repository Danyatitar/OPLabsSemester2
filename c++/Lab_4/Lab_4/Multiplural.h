#pragma once

#include <iostream>
#include <vector>
using namespace std;
class MultiPlural {
private:
    vector <char> plural;
public:
    MultiPlural();
    MultiPlural(int );
    MultiPlural(vector <char>);
    void Print();
    bool Contain(int);
    vector <char> getPlural();
    MultiPlural operator +(const MultiPlural& );
    MultiPlural operator -(const MultiPlural& );
    MultiPlural operator *(const MultiPlural& );
};