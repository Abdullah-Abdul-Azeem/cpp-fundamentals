#include <iostream>
using namespace std;
int main()
{
    float sales, dayTotal=0, comprehensiveTotal=0;
    
    for(int day=1; day<=3; day++)
    {
        cout<<"--- Day "<<day<<" ---"<<endl;
        for (int shift=1; shift<=2; shift++)
        {
            cout<<"Enter sales for shift "<<shift<<": ";
            cin>>sales;
            dayTotal += sales;
        }
        cout<<"Total sales for Day "<<day<<" = "<<dayTotal<<endl<<endl;
        comprehensiveTotal+=dayTotal;
        dayTotal = 0;
    }
    cout<<"================================"<<endl;
    cout<<"Total Sales for 3 Days = "<<comprehensiveTotal<<endl;
    cout<<"================================"<<endl;

    return 0;
}