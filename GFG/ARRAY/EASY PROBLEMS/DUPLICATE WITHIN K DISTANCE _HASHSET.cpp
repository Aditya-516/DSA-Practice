#include<iostream>
#include<bits/stdc++.h>
using namespace std ;
string IsPresent(vector<int> arr, int k) {
    unordered_map<int,int> mp;  // stores last index of each element
    for(int i = 0; i < arr.size(); i++) {
        if(mp.find(arr[i]) != mp.end() && i - mp[arr[i]] <= k) {
            return "YES";
        }
        mp[arr[i]] = i; // update last index
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