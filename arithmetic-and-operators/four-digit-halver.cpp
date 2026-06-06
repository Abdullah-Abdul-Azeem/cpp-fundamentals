/*Given a 4-digit number, write a program that splits the
number into two 2-digit numbers*/
#include <iostream>
using namespace std;
int main()
{
    int number, split_num1, split_num2;
    
    cout<<"Enter a 4-digit number: ";
    cin>>number;
    
    split_num1 = number / 100;
    split_num2 = number % 100;
    
    cout<<"The two 2-digit numbers are: "<<split_num1<<" and "<<split_num2;

    return 0;
}