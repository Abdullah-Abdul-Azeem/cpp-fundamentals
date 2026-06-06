#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int i)
{
    int n, numOfDigits=0, Armstrongsum=0, digit;
    bool Armstrong=false;
    
    n = i;
    while (n>0)
    {
        n = n/10;
        numOfDigits++;
    }
    
    n = i;
    while (n > 0)
    {
        digit = n % 10;
        Armstrongsum += pow(digit, numOfDigits);
        n = n / 10;
    }
    
    if (i == Armstrongsum)
        Armstrong=true;
    
    return Armstrong;
}


int main()
{
    int L, U;
    
    cout<<"Enter lower and upper bounds: ";
    cin>>L>>U;
    
    cout<<"Armstrong numbers are: ";
    for(int i = L; i <= U; i++)
    {
        if(isArmstrong(i))
        {
            cout<<i<<" ";
        }
    }
    cout<<endl;
    return 0;
}
