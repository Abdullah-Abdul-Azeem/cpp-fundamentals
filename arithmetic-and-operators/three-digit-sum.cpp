/*Given a 3-digit number, write a program to print the sum of
the digits*/
#include <iostream>
using namespace std;
int main()
{
    int  number, digit1, digit2, digit3, temp, sum;
    
    cout<<"Please enter a 3-digit number: ";
    cin>>number;
    
    digit1 = number / 100;
    temp = number % 100;
    digit2 = temp / 10;
    digit3 = temp % 10;
    
    sum = digit1 + digit2 + digit3;
    
    cout<<"The sum of the three digits is: "<<sum;
    
    return 0;
}