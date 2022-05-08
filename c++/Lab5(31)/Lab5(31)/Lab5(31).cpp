// Lab5(31).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#define _USE_MATH_DEFINES 
#include <math.h>
#include "TParallelepiped.h"
#include "TBall.h"
#include "functions.h"
using namespace std;
int main()
{
	srand(time(NULL));
	cout << "input n" << endl;
	int n;
	cin >> n;
	int p = rand() % n + 1;
	int b = n - p;
	cout << "Number of parallelepipeds: " << p << endl;
	cout << "Number of balls: " << b << endl;
	TParrallelepiped* p_array = new TParrallelepiped[p];
	TBall* b_array = new TBall[b];
	cout << "sum_of_parallelepipeds`_surface: " << square(p_array, p) << endl;
	cout << "volume_of_balls`: " << volume(b_array, b) << endl;

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
