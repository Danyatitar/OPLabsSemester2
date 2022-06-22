#pragma once
#include <fstream>
#include <string>
#include <vector>
using namespace std;
#include "Identyfikator.h"
#include "Node.h"
class Tree {
public:

    Node* create_tree(vector<Identyfikator> ids, int index);
    void printTree(Node* node);
};