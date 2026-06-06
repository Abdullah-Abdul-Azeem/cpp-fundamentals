/*Write a program that asks the user to enter a 2-digit number then,
it prints the digits in seperate lines*/
#include <iostream>
using namespace std;
int main()
{
    int number, digit1, digit2;
    
    cout<<"Please enter a 2-digit number: ";
    cin>>number;
    
    digit1 = number / 10;
    digit2 = number % 10;
    
    cout<<"The first digit is: "<<digit1<<endl;
    cout<<"The second digit is: "<<digit2;

    return 0;
}