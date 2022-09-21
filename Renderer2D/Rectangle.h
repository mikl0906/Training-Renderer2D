#pragma once
#include "ModelObject.h"
#include <cmath>
class Rectangle : public ModelObject
{
public:
	int x, y, w, h;
	// Constructor
	Rectangle(int x, int y, int w, int h) 
	{
		Rectangle::x = x;
		Rectangle::y = y;
		Rectangle::w = w;
		Rectangle::h = h;
	}
	bool check_ray(int x, int y)
	{
		return abs(x - Rectangle::x) <= w / 2 && abs(y - Rectangle::y) <= h / 2;
	}
	void update() {
		Rectangle::x -= 1;
	}
};

