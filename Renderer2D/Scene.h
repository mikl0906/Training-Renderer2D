#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <typeinfo>
#include "Camera.h"
#include "ModelObject.h"
class Scene
{
public:
	int width;
	int height;
	std::vector<ModelObject*> children;
	// Constructor
	Scene(int w, int h) 
	{
		width = w;
		height = h;
	}

	//void add_object(ModelObject object) 
	//{
	//	children.push_back(new ModelObject(object));
	//}
	

	void render_frame() 
	{
		for (int y = 0; y < height; y++) {
			
			std::string current_line = "";

			for (int x = 0; x < width; x++) {
				std::string current_char = " ";

				for (int current = 0; current < children.size(); current++) {
					if (children[current]->check_ray(x, y)) {
						current_char = "#";
					}
				}

				current_line += current_char;
			}
			std::cout << "#" << current_line << "#" << "\n";
		}
	};

	void update_children() {
		for (int current = 0; current < children.size(); current++) {
			children[current]->update();
		}
	}
};

