#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int rev = 0;
    while (n != 0){
        int digit = n % 10;
        if((n > INT32_MAX/10) || (n < INT32_MIN/10)){
            return 0;
        }
        rev = (rev * 10) + digit ;
        n = n / 10;
    }
    cout << rev <<endl;

    return 0;
}