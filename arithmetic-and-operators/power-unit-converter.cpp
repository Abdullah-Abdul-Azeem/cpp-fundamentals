#include <iostream>
using namespace std;
int main()
{
    int mW, kW, remainingW, remainingmW,temp;
    
    cout<<"Enter the power consumption in milliwatts: ";
    cin>>mW;
    
    kW = mW/1000000;
    temp = mW%1000000;
    remainingW = temp/1000;
    remainingmW = temp%1000;
    
    cout<<"Kilowatts: "<<kW<<"\nWatts: "<<remainingW<<"\nMilliwatts: "<<remainingmW;
    

    return 0;
}