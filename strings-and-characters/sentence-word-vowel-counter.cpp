#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char line[100];
    int word=0, space=0, vowel=0;
    
    cout<<"Enter a sentence: ";
    cin.get(line, 100);
    
    for (int i=0; i<strlen(line); i++)
    {
        if (i==0 && line[i]!=' ')
        word++;
        else if(line[i]==' ')
        space++;
        if (line[i]==' '&&line[i+1]!=' ')
        word++;
        else if (line[i]=='a'||line[i]=='e'||line[i]=='i'||line[i]=='o'||line[i]=='u')
        vowel++;
    }
    
    cout<<endl;
    cout<<"There are "<<vowel<<" vowel letters, "<<space<<" spaces and "<<word<<" words in the sentence.";
    
    return 0;
}