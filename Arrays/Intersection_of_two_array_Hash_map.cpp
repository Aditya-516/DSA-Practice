#include<iostream>
#include<bits/stdc++.h>
using namespace std ;
vector<int> Intersection(vector<int> &arr1, vector<int> & arr2){
    unordered_map<int,int> Seen ;
    vector<int> Res ;
    for(int i=0;i<arr1.size();i++){
        for(int j=0;j<arr2.size();j++){
            if(arr1[i]==arr2[j] && Seen.count(arr1[i])==0){
                Seen.insert({arr1[i],1});
                Res.push_back(arr1[i]);
            }
        }
    }
    return Res ;
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