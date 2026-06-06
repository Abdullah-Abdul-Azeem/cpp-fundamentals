#include <iostream>
using namespace std;
int main()
{
    int gallons;
    double price;
    char occupation;
    
    cout<<"Enter the amount of gallons: ";
    cin>>gallons;
    
    cout<<"Enter your occupation. Enter \'S\' for student and \'E\' for employee: ";
    cin>>occupation;
    
    if (occupation=='E')
        if (gallons>2000)
        price = 0.2 * 1000 + 0.3 * 1000 + (gallons - 2000) * 0.4;
        else if (gallons>1000)
        price = 0.2 * 1000 + (gallons - 1000) * 0.3;
        else
        price = 0.2 * gallons;
    else if (occupation=='S')
    price = gallons * 0.15;
    
    cout<<"The cost is: "<<price;

    return 0;
}