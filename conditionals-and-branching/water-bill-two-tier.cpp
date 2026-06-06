#include <iostream>
using namespace std;
int main()
{
    int gallons;
    float cost;
    
    cout<<"Enter the gallons: ";
    cin>>gallons;
    
    if (gallons <= 1000)
        cost = 0.2 * 1000;
    else
        cost = 0.2 * 1000 + (gallons - 1000) * 0.4;
    
    cout<<"The cost is: "<<cost;

    return 0;
}