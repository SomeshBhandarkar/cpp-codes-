#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){
    int start = 0;
    int end = size-1;

    int mid = start + (end - start)/2;

    while(start <= end){
        if(arr[mid] == key){
            return mid;
        }

        // right part -->
        if(arr[mid < key]){
            start = mid + 1;
        }
        //left vala part --> 
        else{ // key < arr[mid]
            end = mid - 1;
        }
        mid =  start + (end - start)/2;

    }
    return -1;
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

    cout << "array elements are: " << endl;
    for(int i = 0;i < size; i++){
        cout << arr[i] << endl;
    }

    cout << "enter the key to search: ";
    int key;
    cin >> key;

    int index = binarySearch(arr, size , key);
    cout << "Index is : " << index << endl;

    return 0;
}