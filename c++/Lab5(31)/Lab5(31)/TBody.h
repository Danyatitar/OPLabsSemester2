#pragma once
#include <iostream>
#define _USE_MATH_DEFINES 
#include <math.h>
using namespace std;
class TBody {
public:
	virtual double square_of_surface() = 0;
	virtual double volume() = 0;
};
