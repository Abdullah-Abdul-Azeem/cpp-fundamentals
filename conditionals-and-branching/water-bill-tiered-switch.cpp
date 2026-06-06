#include <iostream>
using namespace std;
int main()
{
    char student;
    int gallons;
    double price;
    
    cout<<"Are you a student? Y/N: ";
    cin>>student;
    
    cout<<"Enter the gallons: ";
    cin>>gallons;
    
    switch (student)
    {
        case 'Y': price = gallons * 0.15;
        break;
        case 'N':
        if (gallons>2000)
        price = 0.2 * 1000 + 0.3 * 1000 + (gallons - 2000) * 0.4;
        else if (gallons>1000)
        price = 0.2 * 1000 + (gallons - 1000) * 0.3;
        else
        price = 0.2 * gallons;
    }
    cout<<"The price is: "<<price;

    return 0;
}