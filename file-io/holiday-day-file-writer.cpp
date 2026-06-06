#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int dayType, max, min, random;
    string holidayType;
    
    ofstream fout("days.txt");
    
    cout<<"This program generates a random day in midterm vacation."<<endl;
    cout<<"Enter day type (1: Ramadan, 2: Eid, 3: Spring break): ";
    for (int i=0; i<5; i++)
    {
        cin>>dayType;
    
    if (dayType==1)
    {
        min = 13;
        max = 19 - 13 + 1;
        holidayType = "Ramadan";
        random = min + rand()%max;
        fout<<"March "<<random<<" is a day in "<<holidayType<<"."<<endl;
    }
    else if (dayType==2)
    {
        min = 20;
        max = 22 - 20 + 1;
        holidayType = "Eid";
        random = min + rand()%max;
        fout<<"March "<<random<<" is a day in "<<holidayType<<"."<<endl;
    }
    else if (dayType==3)
    {
        min = 23;
        max = 29 - 23 + 1;
        holidayType = "spring break";
        random = min + rand()%max;
        fout<<"March "<<random<<" is a day in "<<holidayType<<"."<<endl;
    }
    else
        fout<<"Invalid input."<<endl;
    }
    
    fout.close();
    
    return 0;
}