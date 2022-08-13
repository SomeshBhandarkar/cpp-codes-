#include<iostream>
using namespace std;

int minValue(int arr[], int n){

    int min = INT32_MAX;

    for(int i = 0; i<n; i++){

        if(arr[i] < min){
            min = arr[i];
        }
    }

    return min;
}

int maxValue(int arr[], int n){
    int max = INT32_MIN;
    
    for(int i = 0; i<n; i++){

        if(arr[i] > max)
            max = arr[i];

    }
    
    return max; 
}

int main()
{
    int n;
    cout << "enter the size of array: " << endl;
    cin >> n;

    int arr[20];

    for(int i=0; i<n; i++){
        cout << "Enter " << i << " element: " << endl;
        cin >> arr[i];
    }

    cout << "The minimum value in the array is: " << minValue(arr,n) << endl;
    cout << "The maximum value in the array is: " << maxValue(arr,n) << endl;

    return 0;
}