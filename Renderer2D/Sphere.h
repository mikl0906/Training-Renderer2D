#pragma once
#include "ModelObject.h"
#include <cmath>
class Sphere : public ModelObject
{
public:
	int x, y, r;
	// Constructor
	Sphere(int x, int y, int r) 
	{
		Sphere::x = x;
		Sphere::y = y;
		Sphere::r = r;
	}
	bool check_ray(int x, int y) 
	{
		return pow(r, 2) >= pow(x - Sphere::x, 2) + pow(y - Sphere::y, 2);
	}
	void update() {
		Sphere::x += 1;
	}
};

