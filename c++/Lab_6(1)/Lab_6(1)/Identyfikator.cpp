#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;
#include "Identyfikator.h"

    Identyfikator::Identyfikator(string name, int count) {
        this->name = name;
        this->count = count;
    }
    string  Identyfikator::getName() {
        return this->name;
    }

    void  Identyfikator::setName(string name) {
        this->name = name;
    }
    int  Identyfikator::getCount() {
        return this->count;
    }

    void  Identyfikator::setName(int count) {
        this->count = count;
    }
    void  Identyfikator::Print() {
        cout << "identyfikator: " << name << "  count: " << count << endl;
    }