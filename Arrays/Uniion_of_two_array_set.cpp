#include<iostream>
#include<bits/stdc++.h>
using namespace std ;
vector<int> Union(vector<int> &arr1,vector<int> &arr2){
    set<int>s;
    for(int i=0;i<arr1.size();i++){
        s.insert(arr1[i]);
    }
    for(int i=0;i<arr2.size();i++){
        s.insert(arr2[i]);
    }
    vector<int> res;
    for(auto it:s){
        res.push_back(it);
    }
    return res;
}
int main(){
    vector<int> arr1 = {7, 1, 5, 2, 3, 6};
    vector<int> arr2 = {3, 8, 6, 20, 7};
    vector<int> temp= Union(arr1,arr2);
    for(int i=0;i<temp.size();i++){
        cout<<temp[i]<<" ";
    }
    return 0 ;
}