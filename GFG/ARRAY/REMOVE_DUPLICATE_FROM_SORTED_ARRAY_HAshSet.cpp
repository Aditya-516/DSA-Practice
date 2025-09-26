#include<iostream>
#include<bits/stdc++.h>
using namespace std ;
int Remove_duplicate(vector<int> &arr){
    unordered_set<int> seen ;
    vector<int> res ;
    for(int num : arr){
        if(seen.find(num)==seen.end()){
            seen.insert(num);
            res.push_back(num);
        }
    }
    arr = res ;
    return arr.size();
}
int main(){
     vector<int> arr = {1,1,2,2,3,3,4};
     int new_length = Remove_duplicate(arr);
     for(int k=0;k<new_length;k++){
        cout<<arr[k]<<" ";
     }
}