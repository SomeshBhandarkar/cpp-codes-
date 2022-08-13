#include<iostream>
using namespace std;

int main()
{
    int money;
    cout << "Enter total money : " << endl;
    cin >> money;

    int choice;
    cout << "Enter your choice : (1.100/2.50/3.20/4.10) " << endl;
    cin >> choice;

    int notes=0;

    switch (choice)
    {
    case 1:
        notes = money/100;
        cout << "100 rupeee notes are: " << notes << endl;
        break;

    case 2: 
        notes = money/50;
        cout << "50 rupees notes are: " << notes << endl;
        break;
    
    case 3: 
        notes = money/20;
        cout << "20 rupees notes are: " << notes << endl;
        break;

    case 4: 
        notes = money/10;
        cout << "10 rupees notes are: " << notes << endl;
        break;
    
    default:
        cout << "invalid choice !! " << endl;
        break;
    }
    return 0;
}