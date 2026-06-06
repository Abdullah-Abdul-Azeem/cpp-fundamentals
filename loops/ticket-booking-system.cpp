#include <iostream>
using namespace std;
int main()
{
    int tickets=50, users=0, request;
    bool soldout=false;
    
    while (!soldout)
    {
    cout<<"Tickets remaining: "<<tickets<<endl;
    cout<<"Enter number of tickets to purchase: ";
    cin>>request;
    
    if (request>0 && request<=tickets)
        {
        cout<<endl;
        tickets -= request;
        users++;
        if (tickets==0)
            soldout=true;
        }
    else
        cout<<"Invalid number of tickets."<<endl<<endl;
    }
    
    cout<<"All tickets sold!"<<endl;
    cout<<"Total buyers: "<<users;
    return 0;
}