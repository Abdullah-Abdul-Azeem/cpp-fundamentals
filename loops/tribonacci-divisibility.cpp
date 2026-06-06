#include <iostream>
using namespace std;
int main()
{
    int n, k, tribonacciNumber, t1=1, t2=1, t3=2;
    
    cout<<"Enter n (Tribonacci term) and k (divisor): ";
    cin>>n;
    cin>>k;
    
    if (n>=1 && k>1)
    {
        if (n==1)
            tribonacciNumber=t1;
        else if (n==2)
            tribonacciNumber=t2;
        else if (n==3)
            tribonacciNumber=t3;
        else if (n>=4)
            for (int i=0; i<(n-3); i++)
            {
              tribonacciNumber = t1 + t2 + t3;
              t1 = t2;
              t2 = t3;
              t3 = tribonacciNumber; 
            }
        if (tribonacciNumber%2 == 0)
            cout<<"Yes, it satisfies the divisibility test";
        else
            cout<<"No, it does not satisfy the divisibility test";
    }
    else
        cout<<"Invalid input";

    return 0;
}