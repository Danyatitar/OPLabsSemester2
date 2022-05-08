#pragma once
#include "TBody.h";
class TParrallelepiped : public TBody {
private:
	double a;
	double b;
	double c;
public:
	TParrallelepiped();
	double getA();
	void SetA();
	double getB();
	void SetB();
	double getC();
	void SetC();
	double square_of_surface();
	double volume();
};
