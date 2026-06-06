#include <iostream>
using namespace std;
int main()
{
    int gold, silver, bronze;
    
    cout<<"Please enter the number of gold coins: ";
    cin>>gold;
    
    cout<<"Please enter the number of silver coins: ";
    cin>>silver;
    
    cout<<"Please enter the number of bronze coins: ";
    cin>>bronze;
    
    silver = silver + gold * 75;
    bronze = bronze + silver * 25;
    
    cout<<"The total number of bronze coins is: "<<bronze;
    
    return 0;
}