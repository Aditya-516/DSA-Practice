//  Using Two Pointer but this will change the order of positive and negative elements 
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void SortPositiveNegative(vector<int> &arr,int n){
    int P1 = 0 ;
    int P2 = n-1;
    while(P1<=P2){
        if(arr[P1]>0){
            P1++;
        }
        else if(arr[P2]<0){
            P2--;
        }
        else{
            swap(arr[P2],arr[P1]);
            P1++;
            P2--;
        }
    }
}
int main(){
    vector<int> arr={-12, 11, -13, -5, 6, -7, 5, -3, -6};
    int n = arr.size();
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    SortPositiveNegative(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0 ;
}