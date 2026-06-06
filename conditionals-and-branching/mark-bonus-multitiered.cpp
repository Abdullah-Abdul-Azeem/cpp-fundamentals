#include <iostream>
using namespace std;
int main()
{
    float mark;
    
    cout<<"Enter your mark: ";
    cin>>mark;
    
    if (mark>=90)
        mark = mark;
    else if (mark >= 80)
        mark++;
    else if (mark >= 70)
        mark+=2;
    else if (mark >= 60)
        mark+=3;
    else
        mark+=5;
    cout<<"Your final mark is: "<<mark;

    return 0;
}