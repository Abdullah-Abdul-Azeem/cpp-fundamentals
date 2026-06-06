#include <iostream>
using namespace std;
int main()
{
    int birthYear, phoneDigits, phoneNumber, prefix, suffix, temp, PIN;
    
    cout<<"Insert birth year: ";
    cin>>birthYear;
    
    cout<<"Insert phone number: ";
    cin>>phoneNumber;
    
    phoneDigits = phoneNumber % 100;
    prefix = birthYear / (phoneDigits + 1);
    temp = phoneDigits * 5;
    suffix = temp % 99;
    PIN = prefix * 100 + suffix;
    
    cout<<"Generated PIN: "<<PIN;

    return 0;
}