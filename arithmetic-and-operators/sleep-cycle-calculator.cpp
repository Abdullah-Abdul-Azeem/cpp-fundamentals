#include <iostream>
using namespace std;
int main()
{
    int sleepCycles, minutes;
    double sleepQuality;
    
    cout<<"Enter sleep time (in minutes): ";
    cin>>minutes;
    
    cout<<endl;
    
    sleepCycles = minutes / 90;
    sleepQuality = sleepCycles * 10.5;
    
    cout<<"Number of complete sleep cycles: "<<sleepCycles<<endl<<endl;
    cout<<"Sleep quality score = "<<sleepQuality;

    return 0;
}