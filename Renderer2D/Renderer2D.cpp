// Renderer2D.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Scene.h"
#include "Sphere.h"
#include "Rectangle.h"
#include <chrono>
#include <thread>

int main()
{
    std::cout << "Hello!";
    system("cls");
    Scene scene(80, 20);

    Sphere sphere(20, 10, 3);
    Rectangle rect(70, 15, 10, 5);

    scene.children.push_back(new Sphere(sphere));
    scene.children.push_back(new Rectangle(rect));
    
    while (true)
    {
        std::this_thread::sleep_for(std::chrono::milliseconds(17));
        system("cls");
        scene.render_frame();
        scene.update_children();
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
