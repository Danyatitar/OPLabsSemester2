// Lab_6(1).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// Lab6_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;
#include "Identyfikator.h"
#include "Node.h"
#include "Tree.h"
#include "functions.h";

    int main()
    {
        vector <string> ids;
        vector <int> counts;
        vector <string> nondup;
        ifstream fin;
        vector <Identyfikator> results;
        ofstream out;
        fin.open("code.txt", std::ios::binary);
        if (!fin.is_open()) {
            cout << "File didn`t exist" << endl;
        }
        else {
            string s;
            while (!fin.eof()) {
                getline(fin, s);
                int index = s.find("=");
                if (index != -1) {
                    s = find_id(s,index);
                    ids.push_back(s);
                }

            }
        }
        counts = calc_counts(ids);
        nondup = find_dups(ids);
        for (int i = 0; i < nondup.size(); i++) {
            Identyfikator id(nondup[i], counts[i]);
            results.push_back(id);
        }
        results = sort(results);
        Tree t;
        Node* root = t.create_tree(results,0);
        t.printTree(root);
    }

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

