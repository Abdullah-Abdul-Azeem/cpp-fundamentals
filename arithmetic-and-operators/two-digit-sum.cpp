/*Write a program that asks the user to enter a 2-digit number then,
it prints the sum of the two digits*/
#include <iostream>
using namespace std;
int main()
{
    int number, digit1, digit2, sum;
    
    cout<<"Please enter a 2-digit number: ";
    cin>>number;
    
    digit1 = number / 10;
    digit2 = number % 10;
    sum = digit1 + digit2;
    
    cout<<"The sum of the two digits is: "<<sum;

    return 0;
}