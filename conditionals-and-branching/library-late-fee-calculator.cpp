#include <iostream>
using namespace std;
int main()
{
    int numOfLateDays;
    double fee;
    
    cout<<"Enter number of late days: ";
    cin>>numOfLateDays;
    
    if (numOfLateDays==0)
    fee = 0;
    else if (numOfLateDays <= 5)
     fee = numOfLateDays * 1.5 + 4.5;
     else if (numOfLateDays>5)
     fee = (numOfLateDays - 5) * 3 + 7.5 + 4.5;
     
     cout<<"Late fee = "<<fee;

    return 0;
}