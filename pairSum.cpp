#include<vector>
#include<iostream>
using namespace std;

vector<vector<int>> pairSum(vector<int> &arr, int s){
    vector<vector<int>> ans;

    for(int i=0;i<arr.size();i++){
        for(int j=i+1;j<arr.size();j++){
            if(arr[i]+arr[j]==s){
                vector<int> temp;
                temp.push_back(min(arr[i],arr[j]));
                temp.push_back(max(arr[i],arr[j]));
                ans.push_back(temp);
            }
        }
    }
    sort(ans.begin(),ans.end());
    return ans;
}


int main()
{
    vector<int> arr;
    int s;
    cin >> s;
    for(int i=0;i<arr.size();i++){
        cin >> arr;
    }
    int ans = pairSum(arr,s);
    cout << ans << endl;
    return 0;
}