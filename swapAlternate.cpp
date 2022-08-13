#include<iostream>
using namespace std;

// it is working for both even and odd types 
int swapAlternate(int arr[], int n){

    for(int i=0; i<n; i+=2){
        
        if(i+1 < n){
            swap(arr[i], arr[i+1]);
        }
    }

    cout << "printing an array: " << endl;
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }cout << endl;
}

int main()
{
    int arr[10] = {1,2,3,5,6};

    int n;
    cout << "Enter the size: " << endl;
    cin >> n;


    swapAlternate(arr,n);

    return 0;
}