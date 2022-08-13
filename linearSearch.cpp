#include<iostream>
using namespace std;

bool linearSearch(int arr[], int n, int key){

    for(int i = 0; i<n; i++){
        if(arr[i] == key)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int n;
    cout << "Enter the number of elements : " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the array elements: " << endl;
    for(int i = 0;i < n; i++){
        cin >> arr[i];
    }

    cout << "array elements are: " << endl;
    for(int i = 0;i < n; i++){
        cout << arr[i] << endl;
    }

    cout << "enter the key to search: ";
    int key;
    cin >> key;

    bool found = linearSearch(arr,n,key);
    
    if(found)
        cout << "key is present";
    else
        cout << "key not present";

    return 0;
}