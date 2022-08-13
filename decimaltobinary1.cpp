//  this is the 2nd approach for decimal to binary conversion -->
#include<iostream>
using namespace std;

void decToBinary(int n){
    int binaryArray[32]; // created array to store the binary number

    int i = 0; // counter to maintain the iteration 

    while(n>0){
        binaryArray[i] = n % 2; // will give me the remainder 

        n = n / 2; // will give me the next number 

        i++; // iterating to the next iteration 

    }

    // printing the binary number in reverse 

    for(int j = i-1; j >= 0; j--){
        cout << binaryArray[j] << " ";
    }cout << endl;
}

int main()
{
    int n = -17;
    decToBinary(n);
    return 0;
}