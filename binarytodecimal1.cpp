#include<iostream>
#include<math.h>
using namespace std;

void binaryToDecimal(int n){

    int i = 0;
    int ans = 0;
    while(n!=0){
        int digit = n % 10;

        if( digit == 1){
            ans = ans + pow(2,i);
        }
        
        n = n / 10;

        i++;
        
        
    }
    cout << "decimal no. is: " << ans << endl;
}
int main()
{
    int n = 101;
    binaryToDecimal(n);
    return 0;
}