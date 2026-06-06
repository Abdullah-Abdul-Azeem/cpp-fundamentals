#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0;
    
    cout<<"Library overdue calculator (use a negative number to finish)."<<endl;
    cout<<"Enter the days overdue for the next time: ";
    cin>>n;
    while (n >= 0)
    {
        sum += n;
        cout<<"Enter the days overdue for the next time: ";
        cin>>n;
    }

    cout<<"The total overdue fee (AED)="<<sum * 1.2;
    return 0;
}