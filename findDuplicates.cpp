#include<iostream>
#include<vector>
using namespace std;

int findDupicates(vector<int> &arr){

    int ans = 0;

    // XORign all the array elements 
    for(int i=0; i<arr.size();i++){
        ans = ans ^ arr[i];
    }

    // XORing from 1 to n-1 
    for(int i=1; i<arr.size(); i++){
        ans = ans ^ i;
    }

    return ans;
}


int main()
{
    vector<int> arr;

    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(3);


    cout << "duplicate number is: " << findDupicates(arr);
    return 0;
}