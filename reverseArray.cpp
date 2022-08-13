#include<iostream>
using namespace std;

int reverseArray(int arr[], int n){

    int start = 0;
    int end = n-1;
    while(start <= end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

    cout << "printing an array: " << endl;
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }cout << endl;
    
}

int main()
{
    int arr[10] = {1,2,3,4,5,6};
    int n;
    cout << "enter the size of the array: " << endl;
    cin >> n; 
    reverseArray(arr,n);
    return 0;
}