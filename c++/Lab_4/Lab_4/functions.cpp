#include <iostream>
#include <vector>
#include "functions.h";
using namespace std;
vector <char> do_plural() {
    vector <char> plural;
    cout << "input number of symbols" << endl;
    int n;
    cin >> n;
    cout << "input symbols" << endl;
    for (int i = 0; i < n; i++) {
        char m;
        cin >> m;
        plural.push_back(m);
    }
    cout << endl;
    return plural;
}