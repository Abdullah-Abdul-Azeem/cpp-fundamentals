#include <iostream>
#include <ctime>
using namespace std;

int minimum=51;

void ReadMatrix(double Table[][5], int N, int M)
{
    srand(time(0));
    for (int i=0; i<N; i++)
    {
        for (int j=0; j<M; j++)
            {
                Table[i][j] = 10+rand()%41;
            }
    }
}

void MinValue(double Table[][5], int N, int M, int &minRow, int &minCol)
{
    for (int i=0; i<N; i++)
    {
        for (int j=0; j<M; j++)
            {
                if (Table[i][j] < minimum)
                {
                    minimum = Table[i][j];
                    minRow = i;
                    minCol = j;
                }
            }
    }
}

void AverageRow(double Table[][5], int N, int M)
{
    float sum, av;
    for (int i=0; i<N; i++)
    {
        sum=0;
        av=0;
        for (int j=0; j<M; j++)
            {
                sum += Table[i][j];
            }
        av=sum/M;
        cout<<"Average of row "<<i<<" = "<<av<<endl;
    }
    cout<<endl;
}

void ShowOutput(double Table[][5], int N, int M, int minRow, int minCol)
{
    cout<<"Matrix:"<<endl;
    for (int i=0; i<N; i++)
    {
        for (int j=0; j<M; j++)
            {
                cout<<Table[i][j]<<"      ";
            }
        cout<<endl;
    }
    cout<<endl;
    cout<<"Minimum value: "<<minimum<<" at location ("<<minRow<<", "<<minCol<<")";
}


int main()
{
    double Table[4][5];
    int r, c;
    
    ReadMatrix(Table, 4, 5);
    MinValue(Table, 4, 5, r, c);
    AverageRow(Table, 4, 5);
    ShowOutput(Table, 4, 5, r, c);
    
    return 0;
}

