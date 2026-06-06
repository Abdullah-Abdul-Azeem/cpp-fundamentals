#include <iostream>
#include <cstring>
using namespace std;

void Analyzer(char line[100], int &digcounter, int &ucounter, int &lcounter, int &spacecounter, int &sycounter);

int main()
{
    char line[100];
    int digcounter=0, ucounter=0, lcounter=0, spacecounter=0, sycounter=0;
    
    cout<<"Enter a line of text: ";
    cin.get(line, 100);
    cout<<endl;
    
    Analyzer(line, digcounter, ucounter, lcounter, spacecounter, sycounter);
    
    cout<<"The stats of the input line:"<<endl;
    cout<<"Digits: "<<digcounter<<endl;
    cout<<"Capital letters: "<<ucounter<<endl;
    cout<<"Small letters: "<<lcounter<<endl;
    cout<<"Spaces: "<<spacecounter<<endl;
    cout<<"Symbols: "<<sycounter<<endl;
    
    
    return 0;
}

void Analyzer(char line[100], int &digcounter, int &ucounter, int &lcounter, int &spacecounter, int &sycounter)
{
    
    for(int i=0; i<strlen(line); i++)
    {
        if (line[i]>='0' && line[i]<='9')
            digcounter++;
        else if (line[i]>='A' && line[i]<='Z')
            ucounter++;
        else if (line[i]>='a' && line[i]<='z')
            lcounter++;
        else if (line[i]==' ')
            spacecounter++;
        else
            sycounter++;
    }
    
}