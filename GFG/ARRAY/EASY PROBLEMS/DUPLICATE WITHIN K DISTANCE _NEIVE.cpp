#include<iostream>
#include<bits/stdc++.h>
using namespace std ;
string IsPresent(vector<int> arr,int k){
    int n = arr.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n && j<i+k ;j++){
            if(arr[i]==arr[j]){
                return "YES";
            }
        }
    }
    return "NO";
}
int main(){
    vector<int> arr={1, 2, 3, 4, 1, 2, 3, 4};
    int k ;
    cout<<"Enter the K : ";
    cin>>k;
    cout<<"STRING PRESENT : "<<IsPresent(arr,k);
    return 0 ;
}