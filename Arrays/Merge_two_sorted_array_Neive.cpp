#include<iostream>
#include<bits/stdc++.h>
using namespace std ;
void Merge(vector<int> &arr1 ,vector<int> &arr2){
    vector<int>merge;
    int n = arr1.size();
    int m = arr2.size();
    int i = 0;
    int j = 0;
    while(i<n && j<m){
        if(arr1[i]<=arr2[j]){
            merge.push_back(arr1[i]);
            i++;
        }
        else{
            merge.push_back(arr2[j]);
            j++;
        }
    }
    while(i<n){
        merge.push_back(arr1[i]);
        i++;
    }
    while(j<m){
        merge.push_back(arr2[j]);
        j++;
    }
    for(int k=0;k<arr1.size();k++){
        arr1[k]=merge[k];
    }
    for(int k=0;k<arr2.size();k++){
        arr2[k]=merge[n+k];
    }
}
int main(){
    vector<int> arr1 = {1, 3, 5, 7};
    vector<int> arr2 = {2, 4, 6, 8};
    cout<<"Before merge : "<<endl;
    cout<<"Array-1 :";
    for(int i:arr1){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"Array-2 :";
    for(int i:arr2){
        cout<<i<<" ";
    }
    cout<<endl;
    Merge(arr1,arr2);
    cout<<"After merge : "<<endl;
    cout<<"Array-2 :";
    for(int i:arr1){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"Array-1 :";
    for(int i:arr2){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0 ;
}