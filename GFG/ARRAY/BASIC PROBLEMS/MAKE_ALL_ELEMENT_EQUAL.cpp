#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std ;
int MinOperations(vector<int> arr,int k){
    int MaxVal=*max_element(arr.begin(),arr.end());
    int res = 0 ;
    for(int x : arr){
        if((MaxVal-x)%k!=0){
            return -1 ;
        }
        res = res + (MaxVal-x)/k ;
    }
    return res ;
}
int main(){
    vector<int> arr= { 21, 33, 9, 45, 63};
    int k ;
    cout<<"Enter the K : "; 
    cin>>k;
    cout<<"Array : ";
    for(int x : arr){
        cout<<x<<" ";
    }
    cout<<endl;
    cout<<"The Min Operations Required : "<<MinOperations(arr,k);
    return 0 ;

}