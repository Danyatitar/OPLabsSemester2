#include <iostream>
#include <vector>
#include "Multiplural.h";
using namespace std;
 MultiPlural::MultiPlural() {
    int n = rand() % 10 + 1;
    for (int i = 0; i < n; i++) {

        int m = rand() % 30 + 90;
        plural.push_back((char)m);
    }
}
 MultiPlural::MultiPlural(int n) {
    for (int i = 0; i < n; i++) {

        int m = rand() % 20 + 90;
        plural.push_back(m);
    }
}
 MultiPlural::MultiPlural(vector <char> plural) {
    this->plural = plural;
}
 void  MultiPlural::Print() {

    for (int i = 0; i < plural.size(); i++) {
        cout << plural[i] << " ";
    }
    cout << endl;
}
 bool  MultiPlural::Contain(int i) {
    bool p = false;
    for (int j = 0; j < this->plural.size(); j++) {
        if (plural[j] == i) {
            p = true;
        }
    }
    return p;
 }
 vector <char>  MultiPlural::getPlural() {
    return this->plural;
}
MultiPlural  MultiPlural::operator +(const MultiPlural& other) {
    MultiPlural tmp;
    tmp.plural.clear();
    for (int i = 0; i < this->plural.size(); i++) {
        tmp.plural.push_back(this->plural[i]);
    }
    for (int i = 0; i < other.plural.size(); i++) {
        tmp.plural.push_back(other.plural[i]);
    }
    return tmp;
}
 MultiPlural  MultiPlural::operator -(const MultiPlural& other) {
    MultiPlural tmp;
    vector <char> reverse;
    tmp.plural.clear();
    for (int i = 0; i < other.plural.size(); i++) {
        if ((this->Contain(other.plural[i]))) {

            reverse.push_back(other.plural[i]);
        }

    }
    for (int i = 0; i < this->plural.size(); i++) {
        bool p = true;
        for (int j = 0; j < reverse.size(); j++) {
            if (this->plural[i] == reverse[j]) {
                p = false;
            }
        }
        if (p) {
            tmp.plural.push_back(this->plural[i]);
        }
    }
    return tmp;
}
MultiPlural  MultiPlural::operator *(const MultiPlural& other) {
    MultiPlural tmp;
    tmp.plural.clear();
    for (int i = 0; i < other.plural.size(); i++) {
        if ((this->Contain(other.plural[i]))) {
            tmp.plural.push_back(other.plural[i]);
        }
    }
    return tmp;
}