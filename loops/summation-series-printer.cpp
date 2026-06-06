#include <iostream>
using namespace std;
int main()
{
    int n, counter = 1, sum = 0;
    
    cout<<"Enter an integer n (1 to 9): ";
    cin>>n;
    
    if (n>=1 && n<=9)
    {
        while (n>counter)
        {
            cout<<counter<<"+";
            sum += counter;
            counter++;
        }
        cout<<n<<"="<<sum+n;
    }
    else
        cout<<"Error: The input is not in the range";

    return 0;
}