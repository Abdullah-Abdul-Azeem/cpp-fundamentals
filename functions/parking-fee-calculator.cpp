#include <iostream>
using namespace std;

int calculateParkingFee(int hours, int mins)
{
    int fee;
    
    if(mins > 0)
        hours++;
        
    if (hours <= 2)
        fee = 5*hours;
    else
        fee = 5*2 + (hours - 2)*3;
        
    if (fee>50)
        fee = 50;
        
    return fee;

}


int main()
{
    int hours, mins, fee;
    
    cout<<"Enter parking time (hours and minutes): ";
    cin>>hours>>mins;
    
    fee = calculateParkingFee(hours, mins);
    
    cout<<"The total fee is: "<<fee<<" AED";

    return 0;
}