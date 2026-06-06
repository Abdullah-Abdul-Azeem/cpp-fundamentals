/*Write a C++ program that computes the volume of a cylinder,
given the radius and height*/

#include <iostream>
using namespace std;
int main()
{
    float radius, height, volume;
    const float pi = 3.14;
    
    cout<<"Please enter the radius of a cylinder: ";
    cin>>radius;
    
    cout<<"Please enter the height of a cylinder: ";
    cin>>height;
    
    volume = pi * radius*radius * height;
    
    cout<<"The volume is: " << volume;
    
    return 0;
}