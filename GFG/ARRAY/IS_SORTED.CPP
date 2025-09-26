#include<iostream>
#include<bits/stdc++.h>
using namespace std ;
bool IS_Sorted(vector<int> arr,int n){
    if(n==0 || n==1){
        return true ;
    }
    if(arr[n-2]>=arr[n-1]){
        return false;
    } 
    return IS_Sorted(arr,n-1);
}
int main(){
    vector<int> arr = { 10, 20, 30, 40, 50 };

    if(IS_Sorted(arr,arr.size())){
        cout<<"Array is Sorted !";
    }
    else{
        cout<<"Array is Not Sorted !";          
    }
    return 0 ;
}