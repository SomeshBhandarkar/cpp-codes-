#include<iostream>
using namespace std;

int arraySum(int arr[], int n){

    int ans = 0;
    for(int i=0; i<n ; i++){
        ans = ans + arr[i];
    }

    return ans;

}

int main()
{
    int arr[20];
    int n;
    cin >> n;
    for(int i = 0; i<n; i++){
        cin >> arr[i] ;
    }cout << endl;

    cout << arraySum(arr,n) << endl;


    return 0;
}