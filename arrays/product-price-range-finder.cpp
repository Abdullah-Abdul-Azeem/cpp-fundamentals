#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;
int main()
{
    float prices[13], cheapest = 70, mostExpensive = 0;
    int cindex, eindex;
    
    cout<<"Generated prices:"<<endl;
    cout<<"------------------------------"<<endl;
    srand(time(0));
    for (int i=0; i<13; i++)
    {
        prices[i] = 17.2 + (rand() / static_cast<double>(RAND_MAX)) * (63.7 - 17.2);
        cout<<"Product "<<i+1<<": Dhs"<<fixed<<setprecision(2)<<prices[i]<<endl;
    }
    cout<<"------------------------------"<<endl;
    cout<<endl;
    
    for (int i=0; i<13; i++)
    {
        if (prices[i]<cheapest)
        {
            cheapest = prices[i];
            cindex = i+1;
        }
    }
    for (int i=0; i<13; i++)
    {
        if (prices[i]>mostExpensive)
        {
            mostExpensive = prices[i];
            eindex = i+1;
        }
    }
    
    cout<<"The cheapest product:"<<endl;
    cout<<" Product number: "<<cindex<<endl;
    cout<<" Price         : Dhs"<<fixed<<setprecision(2)<<cheapest<<endl<<endl;
    
    cout<<"The most expensive product:"<<endl;
    cout<<" Product number: "<<eindex<<endl;
    cout<<" Price         : Dhs"<<fixed<<setprecision(2)<<mostExpensive;
    
    return 0;
}