#include<iostream>
using namespace std;

int uniqueElement(int arr[], int n){

    int ans = 0;
    for(int i = 0; i<n; i++){
        ans = ans ^ arr[i];
    }
    return ans;
}

int main()
{
    int n;
    cout << "enter the size of array: " << endl;
    cin >> n;

    int arr[100];
    cout << "enter the array elements: " << endl;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    } cout << endl;

    cout << "unique element is: " << uniqueElement(arr,n) << endl;
    return 0;
}