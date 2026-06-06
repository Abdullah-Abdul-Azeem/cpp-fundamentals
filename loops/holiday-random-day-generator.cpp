#include <iostream>
using namespace std;
int main()
{
    int dayType, max, min, random;
    string holidayType;
    
    cout<<"This program generates a random day in midterm vacation."<<endl;
    cout<<"Enter day type (1: Ramadan, 2: Eid, 3: Spring break): ";
    cin>>dayType;
    
    if (dayType==1)
    {
        min = 13;
        max = 19 - 13 + 1;
        holidayType = "Ramadan";
    }
    else if (dayType==2)
    {
        min = 20;
        max = 22 - 20 + 1;
        holidayType = "Eid";
    }
    else if (dayType==3)
    {
        min = 23;
        max = 29 - 23 + 1;
        holidayType = "spring break";
    }
    
    random = min + rand()%max;
    cout<<"March "<<random<<" is a day in "<<holidayType<<".";
    return 0;
}