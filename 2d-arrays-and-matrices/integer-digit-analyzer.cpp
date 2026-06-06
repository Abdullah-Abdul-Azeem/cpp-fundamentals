#include <iostream>
using namespace std;
int main()
{
    int num, n, digitCounter=0, divisor=10, divisor1, power, sum=0, temp, reverse=0, digit, compareDigit;
    bool escape=false, repeat=false;
    
    cout<<"Enter a positive integer: ";
    cin>>num;
    cout<<endl;
    
    while (escape==false)
    {
        if (num / divisor == 0)
        {
           escape=true;
        }
        divisor = divisor * 10;
        digitCounter = digitCounter + 1;
    }
    cout<<"Number of digits: "<<digitCounter<<endl;
    
    divisor=10;
    if (digitCounter>1)
        for (int i=0; i<digitCounter; i++)
        {
          temp = num % divisor;
          power = divisor / 10;
          temp = temp / power;
          sum = sum + temp;
          divisor = divisor * 10;
        }
    else
        sum = num;
    cout<<"Sum of digits: "<<sum<<endl;
    
    divisor=10;
    n=digitCounter;
    for (int i=0; i<digitCounter; i++)
    {
        n--;
        temp = num % divisor;
        power = divisor / 10;
        temp = temp / power;
        power=1;
          for (int powcount=0; powcount<n; powcount++)
            {
            if (n==0)
                power=1;
            power = power * 10;
            }
        temp = temp * power;
        reverse = reverse + temp;
        divisor = divisor * 10;
    }
    cout<<"Reversed number: "<<reverse<<endl;
    
    if (digitCounter == 1)
    {
        cout<<"The number is a palindrome"<<endl;
        cout<<"The number does not contain repeated digits";
    }
    else if (num == reverse)
        cout<<"The number is a palindrome"<<endl;
    else
        cout<<"The number is not a palindrome"<<endl;
    
    divisor = 10;
    for (int i=0; i<digitCounter; i++)
    {
          temp = num % divisor;
          power = divisor / 10;
          digit = temp / power;
          divisor1 = 10;
          for (n=0; n<digitCounter; n++)
          {
              if (i==n)
              {
                divisor1 = divisor1 * 10;
                continue;
              }
              temp = num % divisor1;
              power = divisor1 / 10;
              compareDigit = temp / power;
              if (digit==compareDigit)
              {
                repeat = true;
              }
              divisor1 = divisor1 * 10;
          }
          divisor = divisor * 10;
    }    
 
        if (repeat == true)
        {
            cout<<"The number contains repeated digits";
        }
        else
        {
            cout<<"The number does not contain repeated digits";
        }

    return 0;
}