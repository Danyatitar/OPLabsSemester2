#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;
#include "Identyfikator.h"
#include "Node.h"

Node::Node(Identyfikator id) : id(id), left(NULL), right(NULL) {}
Identyfikator Node::getIdentyfikator() {
    return this->id;
}
void  Node::setIdentyfikator(Identyfikator id) {
    this->id = id;
}