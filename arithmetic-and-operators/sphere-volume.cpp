/*Write a C++ rogram that computes the volume of a sphere,
given the radius*/

#include <iostream>
using namespace std;
int main()
{
    float radius, volume;
    const float pi = 3.14;
    
    cout<<"Enter the radius of a sphere: ";
    cin>>radius;
    
    volume = 4/3 * pi * radius*radius*radius;
    
    cout<<"The volume = "<<volume;
    
    
    
    return 0;
}