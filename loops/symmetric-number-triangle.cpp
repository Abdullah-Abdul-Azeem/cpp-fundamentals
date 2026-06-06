#include <iostream>
using namespace std;
int main()
{
    int n, num=0, reverse;
    
    cout<<"Enter n: ";
    cin>>n;
    
    while (!(n>=1 && n<=15))
    {
        cout<<"Enter n such that it is 1 ≤ n ≤ 15: ";
        cin>>n;
    }
    
    for (int i=1; i<=n; i++)
    {
        for (int j=0; j<i; j++)
        {
            
            cout<<++num<<" ";
            
        }
    if (n - 1 == i)
        reverse = num;
    cout<<endl;
    }
    reverse++;
    for (int i=n; i>=1; i--)
    {
        for (int j=i; j>1; j--)
        {
            
            cout<<--reverse<<" ";
            
        }
    cout<<endl;
    }
    
    return 0;
}