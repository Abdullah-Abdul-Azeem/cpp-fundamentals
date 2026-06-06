#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;
int main()
{
    int minTemp, maxTemp, readings, counter=0;
    float average, sum=0;
    
    cout<<"Enter number of readings: ";
    cin>>readings;
    
    int reading[readings];
    
    cout<<"Enter minimum temperature: ";
    cin>>minTemp;
    
    cout<<"Enter maximum temperature: ";
    cin>>maxTemp;
    
    cout<<endl;
    cout<<"Generated temperature readings: "<<endl;
    srand(time(0));
    for (int i=0; i<readings; i++)
    {
        reading[i] = minTemp + rand()%(maxTemp-minTemp+1);
        cout<<reading[i]<<"   ";
        sum += reading[i];
        if ((i+1)/8 == (i+1)/8.0)
            cout<<endl;
    }
    cout<<endl<<endl;
    
    average=sum/readings;
    cout<<"Average temperature: "<<fixed<<setprecision(2)<<average<<endl;
    
    for (int i=0; i<readings; i++)
    {
        if (reading[i] > average)
            counter++;
    }
    
    cout<<"Readings above average: "<<counter;
    
    return 0;
}