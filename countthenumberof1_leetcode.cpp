#include<iostream>
using namespace std;
class Solution{
    public:
    int Numberofone(uint32_t n){
        int count = 0;
        while(n!=0){
            if(n&1){
                count++;
            }
            n = n >> 1;
        }
        cout << count << endl;
        return count;
    }
};
int main()
{
    uint32_t n;
    cout << "Enter n: ";
    cin >> n;
    Solution s;
    s.Numberofone(n);
    return 0;
}