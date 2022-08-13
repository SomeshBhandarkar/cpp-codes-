#include<iostream>
#include<vector>
#include<set>
using namespace std;

// this solution is not optimized it is o(n^3) time complexity code 

vector<vector<int>> findTriplets(vector<int> &arr, int n, int K){
    set<vector<int>> visited;
    vector<vector<int>> ans;

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            for(int k=j+1; k<n; k++){
                if(arr[i]+arr[j]+arr[k]==K){
                    vector<int> temp;
                    temp.push_back(arr[i]);
                    temp.push_back(arr[j]);
                    temp.push_back(arr[k]);

                    sort(temp.begin(),temp.end());
                    if(visited.find(temp) == visited.end()){
                        ans.push_back(temp);    
                        visited.insert(temp);
                    }

                }
            }
        }
    }
    return ans;
}

int main()
{
    vector<int> arr;
    int n;
    cout << "enter the size: " << endl;
    cin >> n;
    int K;
    cout << "enter the key (K): " << endl;
    cin >> K;

    

    return 0;
}