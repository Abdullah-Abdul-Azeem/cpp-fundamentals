#include <iostream>
using namespace std;
bool CountEvenDigits(int A, int B);
int main()
{
    int A, B;
    cout << "Enter first integer: ";
    cin >> A;
    cout << "Enter second integer: ";
    cin >> B;

    if (CountEvenDigits(A, B))
        cout << "Both numbers have the same count of even digits." << endl;
    else
        cout << "The numbers do not have the same count of even digits." << endl;

    return 0;
}

bool CountEvenDigits(int A, int B)
{
    bool sameNoOfDigits;
    int temp, Acounter=0, Bcounter=0, evenDigOfA=0, evenDigOfB=0, divisor1=1, divisor2=1;
    
    temp = A;
    if (A==0)
        evenDigOfA = 1;
    while (temp!=0)
    {
        temp = temp/10;
        Acounter++;
    }
    
    temp = B;
    
    if (B==0)
        evenDigOfB = 1;
    while (temp!=0)
    {
        temp = temp/10;
        Bcounter++;
    }
    
    for (int a=0; a<Acounter; a++)
    {
        divisor1 = divisor1 * 10;
        temp = A%divisor1;
        temp = temp/divisor2;
        if (temp%2==0)
            evenDigOfA++;
        divisor2 = divisor2 * 10;
    }
    cout<<"Even digits in first number: "<<evenDigOfA<<endl;
    
    divisor1=1;
    divisor2=1;
    
    for (int b=0; b<Bcounter; b++)
    {
        divisor1 = divisor1 * 10;
        temp = B%divisor1;
        temp = temp/divisor2;
        if (temp%2==0)
            evenDigOfB++;
        divisor2 = divisor2 * 10;
    }
    cout<<"Even digits in second number: "<<evenDigOfB<<endl;
    
    if (evenDigOfA==evenDigOfB)
        sameNoOfDigits = true;
    else
        sameNoOfDigits = false;
    
    return sameNoOfDigits;
}