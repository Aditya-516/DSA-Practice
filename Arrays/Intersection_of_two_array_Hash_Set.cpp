#include<iostream>
#include<bits/stdc++.h>
using namespace std ;
vector<int> Intersection(vector<int> &arr1, vector<int> & arr2){
    unordered_set<int> A(arr1.begin(),arr1.end());
    unordered_set<int> Res ;
    for(int x : arr2){
        if(A.count(x)){
            Res.insert(x);
        }
    }
    return vector<int>(Res.begin(),Res.end());
}
int main(){
    vector<int>arr1;
    vector<int>arr2;
    arr1={1, 2, 3, 2, 1};
    arr2={3, 2, 2, 3, 3, 2};
    vector<int> temp = Intersection(arr1,arr2);
    for(int i=0;i<temp.size();i++){
        cout<<temp[i]<<" ";
    }
    return 0 ;
}