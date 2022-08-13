#include<iostream>
#include <math.h>
using namespace std;

int bitwiseComplement(int n) {
        int i = 0;
        int ans = 0;
        while(n!=0){
            int bit = n & 1;
            
            ans = (bit * pow(10,i)) + ans;
            
            n = n >> 1;
            i++;
        }
        return ans;
        
    }
int main()
{
    int n;
    cout << "Enter n:" << endl;
    cin >> n;
    bitwiseComplement(n);
    return 0;
}