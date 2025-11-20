#include<iostream>
#include<bits/stdc++.h>
using namespace std ;
int  Maxprofit(vector<int> arr){
    int n = arr.size();
    int buy ;
    int sell ;
    int Max_porfit = 0;
    int res = 0 ;
    int j ;
    for(int i=0;i<n;i++){
        buy = arr[i] ;
        j= i+1 ;
        while(j<n){
            sell = arr[j];
            if(sell-buy<0){
                i=j;
                break;
            }
            Max_porfit = sell - buy ;
        }
        if(j<n){
            res = res + Max_porfit ;
        }
        else{
            break ;
        }
    }
    return res ;
}
int main(){
    vector<int> arr={100, 180, 260, 310, 40, 535, 695};
    cout<<"Max Profit : "<<Maxprofit(arr);
    return 0 ;
}
