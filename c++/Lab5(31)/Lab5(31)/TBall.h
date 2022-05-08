#pragma once
#include "TBody.h";

class TBall :public TBody {
private:
	double r;
public:
	TBall();
	double getRadius();
	void SetRadius();
	double square_of_surface();
	double volume();
};
