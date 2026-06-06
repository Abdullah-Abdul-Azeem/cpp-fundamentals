#include <iostream>
using namespace std;
int main()
{
    int ModeID;
    float temperature;
    
    cout<<"Smart Home Hub:"<<endl;
    cout<<"1. Energy Saver Mode"<<endl;
    cout<<"2. Comfort Mode"<<endl;
    cout<<"3. Night Mode"<<endl;
    cout<<"Choose mode: ";
    cin>>ModeID;
    
    if (ModeID == 1 || ModeID == 2)
    {
        cout<<"Enter the temperature: ";
        cin>>temperature;
    }
    
    switch (ModeID)
    {
        case (1):
            if (temperature > 28)
                cout<<"AC set to 24C";
            else
                cout<<"System Idle";
        break;
        case (2):
            if (temperature > 24)
                cout<<"AC set to 22C";
            else if (temperature < 20)
                cout<<"Heater ON";
            else
                cout<<"System Idle";
        break;
        case (3):
            cout<<"Lights OFF, AC set to Silent Mode";
        break;
        default: cout<<"Invalid Mode Selected";
        
    }
    

    return 0;
}