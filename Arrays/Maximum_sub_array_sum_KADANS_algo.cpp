#include<iostream>
#include<bits/stdc++.h>
using namespace std ;
int MaxSubarraySum(vector<int> arr){
    int curr = 0 ;
    int res = INT_MIN ;
    for(int i=0;i<arr.size();i++){
        curr = curr + arr[i] ;
        res = max(curr,res);
        if(curr<0){
            curr = 0 ;
        }
    }
    return res;
}
int main(){
    vector<int> arr;
    arr={-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout<<"Max Subarray Sum is : "<<MaxSubarraySum(arr);
    return 0 ;

}