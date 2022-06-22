#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;
#include "Identyfikator.h"
class Node {
private:
   Identyfikator id;
public:

    Node* left;
    Node* right;
    Node() = default;
    Node(Identyfikator id);
    Identyfikator getIdentyfikator();
    void  setIdentyfikator(Identyfikator id);
};