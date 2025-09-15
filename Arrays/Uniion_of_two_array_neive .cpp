#include<iostream>
#include<bits/stdc++.h>
using namespace std ;
vector<int> Union(vector<int> &arr1,vector<int> &arr2){
    vector<int> temp ;
    for(int i=0;i<arr1.size();i++){
        bool found = false ;
        for(int j=0;i<temp.size();j++){
            if(arr1[i]==temp[j]){
                found = true ;
                break;
            }
        }
        if(!found){
            temp.push_back(arr1[i]);
        }
    }

    for(int i=0;i<arr2.size();i++){
        bool found = false ;
        for(int j=0;j<temp.size();j++){
            if(arr2[i]==temp[j]){
                found = true ;
                break ;
            }
        }
        if(!found){
            temp.push_back(arr2[i]);
        }
    }
    return temp ;
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