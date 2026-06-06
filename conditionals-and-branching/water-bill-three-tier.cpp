#include <iostream>
using namespace std;
int main()
{
    float cost, gallons;
    
    cout<<"Enter the gallons: ";
    cin>>gallons;
    
    if (gallons <= 1000)
        cost = 0.2 * 1000;
    else if (gallons <= 2000)
        cost = 0.2 * 1000 + (gallons - 1000) * 0.3;
    else
        cost = 0.2 * 1000 + 0.3 * 1000 + (gallons - 2000) * 0.4;
    
    cout<<"The cost is: "<<cost;

    return 0;
}