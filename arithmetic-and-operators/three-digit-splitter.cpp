/*Given a 3-digit number, write a program to print the digits
in separate lines*/
#include <iostream>
using namespace std;
int main()
{
    int  number, digit1, digit2, digit3, temp;
    
    cout<<"Please enter a 3-digit number: ";
    cin>>number;
    
    digit1 = number / 100;
    temp = number % 100;
    digit2 = temp / 10;
    digit3 = temp % 10;
    
    cout<<"The first digit is: "<<digit1<<endl;
    cout<<"The second digit is: "<<digit2<<endl;
    cout<<"The third digit is: "<<digit3;
    
    return 0;
}