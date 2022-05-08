#include <iostream>
#define _USE_MATH_DEFINES 
#include <math.h>
#include "TBall.h";
using namespace std;

TBall::TBall() {
	this->r = 1 + (double)rand() / RAND_MAX * 50;
}
double TBall::getRadius() {
	return this->r;
}
void TBall::SetRadius() {
	this->r = r;
}
double TBall::square_of_surface() {
	double s = 4 * M_PI * this->r * this->r;
	return s;
}
double TBall::volume() {
	double v = this->r * this->r * this->r;
	v = v * M_PI * 0.75;
	return v;
}