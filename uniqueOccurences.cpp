#include<iostream>
using namespace std;

bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> m1;
        
        // 1st round is to count the number of occurences of each element in the array. 
        for(int i=0; i<arr.size();i++){
                m1[arr[i]]++;
        }
        
        // Second, count the number of occurences of the frquencies calculated in the first step 
        unordered_map<int, int> m2;
        for(auto j : m1){
            m2[j.second]++;
        }
        
        // check if anyone of them is more than one.
        for(auto j: m2){
            if(j.second > 1){
                return false;
            }
        }
        return true;
    }

int main()
{
    
}