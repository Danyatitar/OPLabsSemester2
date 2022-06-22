#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;
class Identyfikator {
private:
    string name;
    int count;
public:
    Identyfikator(string name, int count);
    string getName();

    void setName(string name);
	int getCount();
void setName(int count);
void Print();
};