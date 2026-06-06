#include <iostream>
using namespace std;
int main()
{
    int length, ucount=0, lcount=0, sycount=0, numcount=0;
    char password;
    cout<<"Enter the length of your password: ";
    cin>>length;
    cout<<"Enter a sequence of "<<length<<" characters: ";
    for (int i=0; i<length; i++)
    {
        cin>>password;
        if (password>='A' && password<='Z')
            ucount++;
        else if (password>='a' && password<='z')
            lcount++;
        else if (password>='0' && password<='9')
            numcount++;
        else
            sycount++;
    }
    if (ucount>=1 && lcount>=1 && sycount>=1)
        cout<<"Strong";
    else
        cout<<"Weak";

    return 0;
}
