#include <iostream>
using namespace std;
int main()
{
    int chargingTime;
    double costWithNoDiscount, discount;
    char chargerType;
    
    cout<<"Enter the charger type: ";
    cin>>chargerType;
    
    cout<<"Enter the charging time in minutes: ";
    cin>>chargingTime;
    
    if (chargerType=='S' || chargerType=='s')
    costWithNoDiscount = chargingTime * 0.25;
    else if (chargerType=='F' || chargerType=='f')
    costWithNoDiscount = chargingTime * 0.60;
    else
    costWithNoDiscount = 0;
    
    if (chargerType=='S' || chargerType=='s' || chargerType=='F' || chargerType=='f')
        if (chargingTime > 120)
        discount = costWithNoDiscount * 0.10;
        else if (chargingTime >= 60)
        discount = costWithNoDiscount * 0.05;
        else
        discount = 0;
    else
    discount = 0;
    
    cout<<"The total cost before discount is: "<<costWithNoDiscount<<" AED"<<endl;
    cout<<"The total discount amount is: "<<discount<< " AED"<<endl;
    cout<<"The final cost is: "<<costWithNoDiscount - discount<<" AED";

    return 0;
}