#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;
int main()
{
    int counter=0;
    char line[100];
    
    cout<<"Enter a line of text: ";
    cin.get(line,100);
    
    for (int i=0; i<strlen(line); i++)
    {
        if (i==0 && isupper(line[i]))
            counter++;
        if (line[i-1]==' ' && isupper(line[i]))
            counter++;
    }
    
    cout<<"#words that start with a capital letter: "<<counter;

    return 0;
}