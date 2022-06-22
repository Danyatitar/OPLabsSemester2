
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;
#include "Identyfikator.h"
#include "Node.h"
#include "Tree.h"
    Node* Tree::create_tree(vector<Identyfikator> ids, int index) {
        Node* ptr = new Node(ids[index]);
        if (index < ids.size() - 1) {
            ptr->left = create_tree(ids, index + 1);

        }
        else if (index < ids.size() - 1) {
            ptr->right = create_tree(ids, index + 1);
        }
        else {
            return ptr;
        }
        return ptr;
    }
    void Tree::printTree(Node* node)
    {
        if (node != NULL) {

            printTree(node->left);
            node->getIdentyfikator().Print();
            printTree(node->right);


        }
    }