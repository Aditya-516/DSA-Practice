#include<iostream>
#include<bits/stdc++.h>
using namespace std ;
vector<int> Union(vector<int> &arr1,vector<int> &arr2){
    int n = arr1.size();
    int m = arr2.size();
    int i=0;
    int j=0;
    vector<int> res;
    while(i<n && j<m){
        if(i>0 && arr1[i-1]==arr1[i]){
            i++;
            continue;
        }
        if(j>0 && arr2[j-1]==arr2[j]){
            j++;
            continue;
        }
        if(arr1[i]<arr2[j]){
            res.push_back(arr1[i]);
            i++;
        }
        else if(arr2[j]<arr1[i]){
            res.push_back(arr2[j]);
            j++;
        }
        else{
            // if both are equal ;
            res.push_back(arr1[i]);
            i++;
            j++;
        }
    }
    while(i<n){
        if(i>0 && arr1[i-1]==arr1[i]){
            i++;
            continue;
        }
        res.push_back(arr1[i]);
        i++;
    }
    while(j<m){
        if(j>0 && arr2[j-1]==arr2[j]){
            j++;
            continue ;
        }  
        res.push_back(arr2[j]);
        j++;
    }
    return res ;

}
int main(){
    vector<int> arr1 = {1, 1, 2, 2, 2, 4};
    vector<int> arr2 = {2, 2, 4, 4};
    vector<int> temp= Union(arr1,arr2);
    for(int i=0;i<temp.size();i++){
        cout<<temp[i]<<" ";
    }
    return 0 ;
}