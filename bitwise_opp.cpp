#include<iostream>
using namespace std;
int main()
{
    int a = 4;
    int b = 6;
    
    // bitwise operator -->
    cout << " a&b " << (a&b) << endl;
    cout << " a|b " << (a|b) << endl;
    cout << " ~a " << ~a << endl;
    cout << " a^b " << (a^b) << endl;

    // left and right shift operation -->

    cout << (17>>1) <<endl;
    cout << (17>>2) <<endl;
    cout << (19<<1) <<endl;
    cout << (19<<2) <<endl;



    return 0;
}