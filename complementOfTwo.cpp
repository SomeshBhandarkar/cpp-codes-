#include<iostream>
using namespace std;

int complementOfTwo(int n){

    int temp = n;
    int mask = 0;

    while(temp!= 0){
        mask = (mask << 1) | 1;
        temp = temp >> 1;
    }

    int ans = (~n) & mask;

    return ans;
}


int main()
{
    int n;
    cout << "Enter the number : " << endl;
    cin >> n;
    cout << complementOfTwo(n);
    return 0;
}