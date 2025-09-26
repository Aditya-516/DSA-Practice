#include<iostream>
#include<bits/stdc++.h>
using namespace std ;
int Remove_duplicate(vector<int> &arr){
    if(arr.empty()){
        return 0 ;
    }
    int i = 0;
    for(int j=1;j<arr.size();j++){
        if(arr[i]!=arr[j]){
            i++;
            arr[i]=arr[j];
        }
    }
    return i+1 ;
}
int main(){
     vector<int> arr = {1,1,2,2,3,3,4};
     int new_length = Remove_duplicate(arr);
     for(int k=0;k<new_length;k++){
        cout<<arr[k]<<" ";
     }
}