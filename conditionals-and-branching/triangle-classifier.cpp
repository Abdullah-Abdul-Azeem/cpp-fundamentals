#include <iostream>
using namespace std;
int main()
{
    float a, b, c;
    
    cout<<"Enter three sides of a triangle: ";
    cin>>a>>b>>c;
    
    if (a + b > c && a + c > b && b + c > a)
        if (a==b && b==c && c==a)
        cout<<"The triangle is equilateral.";
        else if (a==b || b==c || c==a)
        cout<<"The triangle is isosceles.";
        else
        cout<<"The triangle is scalene.";
    else
    cout<<"Error! It is not a triangle.";

    return 0;
}