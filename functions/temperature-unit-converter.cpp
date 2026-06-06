#include <iostream>
using namespace std;

float celsiusToFahrenheit(int celsius)
{
    float fahrenheit;
    
    fahrenheit = (9/5.0) * celsius + 32;
    
    return fahrenheit;
}

float fahrenheitToCelsius(int fahrenheit)
{
    float celsius;
    
    celsius = (fahrenheit - 32)*(5/9.0);
    
    return celsius;
}

int main()
{
    float celsius, fahrenheit;
    
    cout<<"Enter temperature in Celsius: ";
    cin>>celsius;
    
    fahrenheit = celsiusToFahrenheit(celsius);
    cout<<"Fahrenheit: "<<fahrenheit<<endl;
    
    celsius = fahrenheitToCelsius(fahrenheit);
    cout<<"Converted back to Celsius: "<<celsius;
    

    return 0;
}