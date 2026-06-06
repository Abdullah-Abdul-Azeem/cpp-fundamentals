#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double n;
    int x;
    
    cout<<"Enter a number: ";
    cin>>n;
    
    x = sqrt(n);
    if (pow(x,2) == n && n > 0)
    cout<<"Perfect Square! The square root of "<<n<<" is "<<x;
    else
    cout<<"Not a perfect square";
    
    return 0;
}