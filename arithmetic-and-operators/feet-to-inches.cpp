#include <iostream>
using namespace std;
int main()
{
    int feet, inches, finalInches;
    
    cout<<"Enter the length in feet and inches: ";
    cin>>feet>>inches;
    
    finalInches = feet * 12 + inches;
    
    cout<<"The length in inches is: "<<finalInches;

    return 0;
}