/*Given the duration in seconds, output the duration in
hours, minutes, and remaining seconds*/
#include <iostream>
using namespace std;
int main()
{
    int seconds, hours, minutes, remainingSeconds, temp;
    
    cout<<"Enter the duration in seconds: ";
    cin>>seconds;
    
    hours = seconds / 3600;
    temp = seconds % 3600;
    minutes = temp / 60;
    remainingSeconds = temp % 60;
    
    cout<<"The duration is: "<<hours<<" hours "<<minutes<<" minutes "<<remainingSeconds<<" seconds";

    return 0;
}