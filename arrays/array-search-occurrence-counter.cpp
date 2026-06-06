#include <iostream>
using namespace std;
int main()
{
    int num[7], counter=0, n;
    
    cout<<"Enter 7 integers for the array:"<<endl;
    
    for (int i=0; i<7; i++)
    {
        cout<<"Element ["<<i<<"]: ";
        cin>>num[i];
    }
    
    cout<<"Enter another integer n: ";
    cin>>n;
    cout<<endl;
    
    cout<<"Array tab: ";
    for (int i=0; i<7; i++)
    {
        cout<<num[i]<<" ";
        if (num[i] == n)
            counter++;
    }
    cout<<endl;
    
    cout<<"Value n: "<<n<<endl;
    cout<<"Number of occurrences of "<<n<<" in the array is: "<<counter<<endl;
    cout<<"Indices of array cells containing "<<n<<" are: ";
    
    if (counter==0)
        cout<<"None";
    
    for (int i=0; i<7; i++)
    {
        if (num[i] == n)
        cout<<i<<" ";
    }
    
    return 0;
}