#pragma once
class ModelObject
{
public:
	virtual bool check_ray(int x, int y) 
	{
		return false;
	}
	virtual void update() {};
};

