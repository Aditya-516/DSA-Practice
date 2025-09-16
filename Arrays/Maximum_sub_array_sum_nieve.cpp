#include<iostream>
#include<bits/stdc++.h>
using namespace std ;
int MaxSubarraySum(vector<int> arr){
    int sum ;
    int res = 0 ;
    for(int i=0;i<arr.size();i++){
        sum = 0;
        for(int j=i;j<arr.size();j++){
            sum = sum + arr[j] ;
            res = max(res , sum);
        }
    }
    return res ;
}
int main(){
    vector<int> arr;
    arr={4,3,-9,5,-6,3,-2,8};
    cout<<"Max Subarray Sum is : "<<MaxSubarraySum(arr);
    return 0 ;

}