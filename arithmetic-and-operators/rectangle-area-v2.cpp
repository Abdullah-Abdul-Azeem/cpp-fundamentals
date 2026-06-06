/*Write a program in C++ that computes the area of a rectangle,
given the length and width of the rectangle*/

#include <iostream>
using namespace std;
int main()
{
    int length, width, area;
    
    cout<<"Please enter the length of a rectangle: ";
    cin>>length;
    
    cout<<"Please enter the width of a rectangle: ";
    cin>>width;
    
    area = length * width;
    
    cout<<"The area of the rectangle is: " <<area;
    
    return 0;
}