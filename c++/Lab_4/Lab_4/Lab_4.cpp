// Lab_4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include "functions.h"
#include "Multiplural.h"
using namespace std;

int main()
{
    srand(time(NULL));
    vector <char> plural = do_plural();
    MultiPlural a=MultiPlural();
    MultiPlural b = MultiPlural(5);
    MultiPlural c=MultiPlural(plural);
    cout << "Plural A" << endl;
    a.Print();
    cout << "Plural B" << endl;
    b.Print();
    cout << "Plural C" << endl;
    c.Print();
    MultiPlural d = (a + b) - c * b;
    cout << "The result" << endl;
    d.Print();
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
