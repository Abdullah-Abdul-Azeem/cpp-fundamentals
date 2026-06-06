#include <iostream>
using namespace std;
int main()
{
    int cityCode;
    double weight;
    
    cout<<"Enter package weight (kg): ";
    cin>>weight;
    
    cout<<"Enter city code (1-4): ";
    cin>>cityCode;
    
    switch (cityCode)
    {
        case 1: cout<<"Total Shipping Cost: "<<weight*10<<" AED";
        break;
        case 2: cout<<"Total Shipping Cost: "<<weight*7<<" AED";
        break;
        case 3: cout<<"Total Shipping Cost: "<<weight*5<<" AED";
        break;
        case 4: cout<<"Total Shipping Cost: "<<weight*12<<" AED";
        break;
    }

    return 0;
}