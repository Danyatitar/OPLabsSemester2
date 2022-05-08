#include <iostream>
#define _USE_MATH_DEFINES 
#include <math.h>
#include "TParallelepiped.h";

TParrallelepiped::TParrallelepiped() {
	this->a = 1 + (double)rand() / RAND_MAX * 50;
	this->b = 1 + (double)rand() / RAND_MAX * 50;
	this->c = 1 + (double)rand() / RAND_MAX * 50;
}
double TParrallelepiped::getA() {
	return this->a;
}
void TParrallelepiped::SetA() {
	this->a = a;
}
double TParrallelepiped::getB() {
	return this->a;
}
void TParrallelepiped::SetB() {
	this->a = a;
}
double TParrallelepiped::getC() {
	return this->a;
}
void TParrallelepiped::SetC() {
	this->a = a;
}
double TParrallelepiped::square_of_surface() {
	double s = this->a * this->b * 2 + this->a * this->c * 2 + this->b * this->c * 2;
	return s;
}
double TParrallelepiped::volume() {
	double v = this->a * this->b * this->c;
	return v;
}