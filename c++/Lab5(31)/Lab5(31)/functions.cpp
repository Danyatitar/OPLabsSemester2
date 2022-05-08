#include <iostream>
#define _USE_MATH_DEFINES 
#include <math.h>
#include "functions.h"
#include "TParallelepiped.h";
#include "TBall.h";
using namespace std;
double square(TParrallelepiped* p_array, int p) {
	double s = 0;
	for (int i = 0; i < p; i++) {
		s = s + p_array[i].square_of_surface();
	}
	return s;
}
double volume(TBall* b_array, int b) {
	double v = 0;
	for (int i = 0; i < b; i++) {
		v = v + b_array[i].volume();
	}
	return v;
}