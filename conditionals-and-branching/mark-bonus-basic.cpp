#include <iostream>
using namespace std;
int main()
{
    int mark;
    
    cout<<"Enter your mark: ";
    cin>>mark;
    
    if (mark < 60)
    {
        mark += 5;
        cout<<"Your final mark is: "<<mark;
    }
    else
        cout<<"Your final mark is: "<<mark;

    return 0;
}