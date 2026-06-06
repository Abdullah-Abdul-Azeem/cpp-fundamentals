// Given a 4-digit number, print the sum of the digits
#include <iostream>
using namespace std;
int main()
{
    int  number, digit1, digit2, digit3, digit4, temp1, temp2, sum;
    
    cout<<"Please enter a 4-digit number: ";
    cin>>number;
    
    digit1 = number / 1000;
    temp1 = number % 1000;
    digit2 = temp1 / 100;
    temp2 = temp1 % 100;
    digit3 = temp2 / 10;
    digit4 = temp2 % 10;
    
    sum = digit1 + digit2 + digit3 + digit4;
    
    cout<<"The sum of the four digits is: "<<sum;
    
    return 0;
}