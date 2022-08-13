#include<iostream>
using namespace std;

bool linearSearch(int arr[],int n,int key){

    for(int i=0; i<n; i++){

        if(arr[i] == key){
            return 1;   
        }
    }
    return 0;
    
}

int main()
{
    int arr[8] = {12,1,34,2,5,32,11,9};

    int key;
    cout << "Enter the key that you want to find: " << endl;
    cin >> key;

    bool found = linearSearch(arr,8,key);

    if (found){
        cout << "Element found " << endl;
    }
    else
    {
        cout << "Element not found " << endl;
    }
    return 0; 
}