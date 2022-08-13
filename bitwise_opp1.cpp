#include<iostream>
using namespace std;
int main()
{
    int a = 2;
    int b = 3;

    //bitwisr operation --> 
    cout << "bitwise operators --> " <<endl;
    cout << (a & b) << endl;
    cout << (a | b) << endl;
    cout << ~a << endl;
    cout << ~b << endl;
    cout << (a ^ b) << endl;
    
    // left and right shift operation --> 
    cout << "right and left shift operation --> " <<endl;
    cout << (17>>1) <<endl;
    cout << (17>>2) <<endl;
    cout << (19<<1) <<endl;
    cout << (19<<2) <<endl;

    return 0;
}