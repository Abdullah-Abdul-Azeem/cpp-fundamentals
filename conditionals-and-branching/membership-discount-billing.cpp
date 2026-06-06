#include <iostream>
using namespace std;
int main()
{
    bool member;
    double bill, finalBill, discount;
    
    cout<<"Enter total bill: ";
    cin>>bill;
    
    cout<<"Are you a member? (1/0): ";
    cin>>member;
    
    if(member == 1)
        if(bill>=500)
        {
            discount = 0.2 * bill;
            cout<<"Discount amount is: "<<discount<<endl;
            finalBill = bill - discount;
            cout<<"Final bill after discount: "<<finalBill;
        }
        else
        {
            discount = 0.1 * bill;
            cout<<"Discount amount is: "<<discount<<endl;
            finalBill = bill - discount;
            cout<<"Final bill after discount: "<<finalBill;
        }
    else
        if(bill>=500)
        {
            discount = 0.05 * bill;
            cout<<"You are not a member. Limited discount applied (5%)."<<endl;
            cout<<"Discount amount is: "<<discount;
            finalBill = bill - discount;
            cout<<"Final bill after discount: "<<finalBill;
        }
        else
        {
            cout<<"You are not a member. No discount.";
            cout<<"Final Bill = "<<finalBill;
        }

    return 0;
}