#include <iostream>
using namespace std;
int main()
{
    int n1, n2, n3;
    
    cout<<"Enter three numbers: ";
    cin>>n1>>n2>>n3;
    
    if (n1<n2 && n2<n3)
        cout<<"The numbers in ascending order are: "<<n1<<", "<<n2<<", "<<n3;
    else if (n1<n3 && n3<n2)
        cout<<"The numbers in ascending order are: "<<n1<<", "<<n3<<", "<<n2;
    else if (n2<n1 && n1<n3)
        cout<<"The numbers in ascending order are: "<<n2<<", "<<n1<<", "<<n3;
    else if (n2<n3 && n3<n1)
        cout<<"The numbers in ascending order are: "<<n2<<", "<<n3<<", "<<n1;
    else if (n3<n1 && n1<n2)
        cout<<"The numbers in ascending order are: "<<n3<<", "<<n1<<", "<<n2;
    else if (n3<n2 && n2<n1)
        cout<<"The numbers in ascending order are: "<<n3<<", "<<n2<<", "<<n1;

    return 0;
}