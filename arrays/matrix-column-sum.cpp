#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    int matrix[5][5], index, sum = 0;
    
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            matrix[i][j]=1+rand()%9;
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    
    cout<<"Enter the column index for summation: ";
    cin>>index;
    
    for(int i=0; i<5; i++)
    {
        sum += matrix[i][index];
    }
    
    cout<<"Sum of column "<<index<<" is "<<sum;
    
    return 0;
}