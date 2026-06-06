#include <iostream>
using namespace std;
int main()
{
    string name;
    int mark1, mark2, mark3;
    float average;
    
    cout<<"Enter your name: ";
    cin>>name;
    
    cout<<"Enter three marks out of 100: ";
    cin>>mark1>>mark2>>mark3;
    
    average = (mark1 + mark2 + mark3) / 3.0;
    
    cout<<"The average mark of "<<name<<" is "<<average;

    return 0;
}