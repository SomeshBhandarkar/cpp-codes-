#include<iostream>
using namespace std;

string decToBinary(int n){
    if(n<0){ // check if the number is negetive and according to it alter the number 
        n = 256 + n;
    }
    string result = "";
    while(n>0){
        result = string(1,(char) (n%2 + 48)) + result;
        n = n/2;
    }
    return result;

}
int main()
{
    int n = -19;
    decToBinary(n);
    return 0;
}