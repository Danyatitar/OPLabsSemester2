#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;
#include "Identyfikator.h"
#include "Node.h"
#include "Tree.h"
#include "functions.h";
string find_id(string s,int index) {
    int i = 1;
    int j = 0;
    while (true) {
        if (index - i == -1) {
            j = index - i + 1;
            i = i - 1;
            break;
        }
        if (s[index - i] == ' ') {
            j = index - i + 1;
            i = i - 1;
            break;
        }
        i++;
    }
    s = s.substr(j, i);
    return s;
}

vector <int> calc_counts(vector <string> ids) {
    vector <int> counts;
    vector <string> nondup;
    for (int i = 0; i < ids.size(); i++) {
        int count = 0;
        for (int j = 0; j < ids.size(); j++) {
            if (ids[i] == ids[j]) {
                count++;
            }
        }
        bool dup2 = false;
        for (int j = 0; j < nondup.size(); j++) {
            if (ids[i] == nondup[j]) {
                dup2 = true;
            }
        }
        if (!dup2) {

            nondup.push_back(ids[i]);
            counts.push_back(count);
        }
    }
    return counts;
}
vector <string> find_dups(vector <string> ids) {
    vector <int> counts;
    vector <string> nondup;
    for (int i = 0; i < ids.size(); i++) {
        int count = 0;
        for (int j = 0; j < ids.size(); j++) {
            if (ids[i] == ids[j]) {
                count++;
            }
        }
        bool dup2 = false;
        for (int j = 0; j < nondup.size(); j++) {
            if (ids[i] == nondup[j]) {
                dup2 = true;
            }
        }
        if (!dup2) {

            nondup.push_back(ids[i]);
            counts.push_back(count);
        }
    }
    return nondup;
}
vector <Identyfikator> sort(vector <Identyfikator> ids) {
    for (int i = 0; i < ids.size() - 1; i++) {
        for (int j = 0; j < ids.size() - i - 1; j++) {
            if ((int)ids[j].getName()[0] < (int)ids[j + 1].getName()[0]) {
                Identyfikator i = ids[j];
                ids[j] = ids[j + 1];
                ids[j + 1] = i;
            }
        }
    }
    return ids;
}