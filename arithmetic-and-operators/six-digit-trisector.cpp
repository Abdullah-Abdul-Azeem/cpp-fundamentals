/*Given a 6-digit number, write a program that splits the
number into three 2-digit numbers*/
#include <iostream>
using namespace std;
int main()
{
    int number, split_num1, split_num2, split_num3, temp;
    
    cout<<"Enter a 6-digit number: ";
    cin>>number;
    
    split_num1 = number / 10000;
    temp = number % 10000;
    split_num2 = temp / 100;
    split_num3 = temp % 100;
    
    cout<<"The three 2-digit numbers are: "<<split_num1<<", "<<split_num2<<" and "<<split_num3;

    return 0;
}