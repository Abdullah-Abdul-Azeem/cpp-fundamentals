/*Given the duration in seconds, output the duration in minutes
and remaining seconds*/
#include <iostream>
using namespace std;
int main()
{
    int seconds, minutes, remainingSeconds;
    
    cout<<"Enter the duration in seconds: ";
    cin>>seconds;
    
    minutes = seconds / 60;
    remainingSeconds = seconds % 60;
    
    cout<<"The duration is: "<<minutes<<" minutes and "<<remainingSeconds<<" seconds";

    return 0;
}