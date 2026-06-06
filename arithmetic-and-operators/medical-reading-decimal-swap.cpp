#include <iostream>
using namespace std;
int main()
{
    float reading, float_right, correct;
    int intReading, right, left, digit1, digit2;
    
    cout<<"Enter a floating point number with two decimal places: ";
    cin>>reading;
    
    reading = reading * 100;
    intReading = static_cast<int>(reading);
    right = intReading%100;
    left = intReading/100;
    digit1 = right/10;
    digit2 = right%10;
    digit2 = digit2*10;
    right = digit2 + digit1;
    float_right = static_cast<float>(right);
    float_right = float_right/100;
    correct = left + float_right;
    
    cout<<"Corrected medical reading: "<<correct;

    return 0;
}