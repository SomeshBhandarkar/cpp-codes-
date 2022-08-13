#include<iostream>
#include<vector>
#include<map>
using namespace std;

vector<int> allDuplicates(vector<int> &arr){
    map<int,int> hashMap; // creating a map for storing the indexes and the (value and frequency) 
    vector<int> result; // vector var to store result
    
    for(int i: arr){
        hashMap[i++];
        if(hashMap[i] > 1){
            result.push_back(i);
        }
    }
    return result;
}

int main()
{
    int arr[100];
    int n;
    cin >> n;

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int found = allDuplicates(arr);
    cout << found << endl;
    return 0;
}