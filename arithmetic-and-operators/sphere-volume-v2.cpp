/*Write a C++ program that computes the volume of a sphere,
given the radius*/

#include <iostream>
using namespace std;
int main()
{
    float radius, volume;
    const float pi = 3.14;
    
    cout<<"Please enter the radius of a sphere: ";
    cin>>radius;
    
    volume = 4/3 * pi * radius*radius*radius;
    
    cout<<"The volume of the sphere is: "<<volume;
    
    return 0;
}