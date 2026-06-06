#include <iostream>
using namespace std;
int main()
{
    int num, d1, d2;
    
    cout<<"Enter a two-digit number: ";
    cin>>num;
    
    d1 = num / 10;
    d2 = num % 10;
    
    if (num%2 == 0)
        cout<<"The sum of the two digits is: "<<d1+d2;
    else
        cout<<"The product of the two digits is: "<<d1*d2;

    return 0;
}