#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
    for(int i=1;i<n; i++)
    {

        for(int j = 0; j<n-i; j++){

            if(arr[j] < arr[j+1]){
                swap(arr[j],arr[j+1]);
            }

        }
    }
    // cout << "sorted array is: " << endl;
    // for(int i=0;i<n;i++){
    //     cout << arr[i] << " ";
    // }cout << endl;
}

int main()
{
    int size;
    cout << "Enter the size of elements : " << endl;
    cin >> size;
    int arr[size];
    cout << "Enter the array elements: " << endl;
    for(int i = 0;i < size; i++){
        cin >> arr[i];
    }

    cout << "Unsorted array elements are: " << endl;
    for(int i = 0;i < size; i++){
        cout << arr[i] << " ";
    }cout << endl;

    bubbleSort(arr,size);

    cout << "sorted array is: " << endl;
    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }cout << endl;


    return 0;
}