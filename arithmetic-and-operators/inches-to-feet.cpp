/*Given the length of a table in inches, write a program
to display the length in feet and remaining inches*/
#include <iostream>
using namespace std;
int main()
{
    int inches, feet, remainingInches;
    
    cout<<"Please enter the length in inches: ";
    cin>>inches;
    
    feet = inches / 12;
    remainingInches = inches % 12;
    
    cout<<"The length is: "<<feet<<" feet and "<<remainingInches<<" inches";

    return 0;
}