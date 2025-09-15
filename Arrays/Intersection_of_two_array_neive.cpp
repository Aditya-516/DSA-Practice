#include<iostream>
#include<bits/stdc++.h>
using namespace std ;
vector<int> Intersection(vector<int> &arr1, vector<int> & arr2){
    vector<int>res;
    for(int i=0;i<arr1.size();i++){
        for(int j=0;j<arr2.size();j++){
            if(arr1[i]==arr2[j]){
                bool found = false ;
                for(int k=0;k<res.size();k++){
                    if(res[k]==arr1[i]){
                        found = true ;
                        break ;
                    }
                }
                if(!found){
                    res.push_back(arr1[i]);
                }
            }
        }
    }
    return res ;
}
int main(){
    vector<int>arr1;
    vector<int>arr2;
    arr1={1, 2, 3, 2, 1};
    arr2={3, 2, 2, 3, 3, 2};
    vector<int> temp = Intersection(arr1,arr2);
    for(int i=0;i<temp.size();i++){
        cout<<temp[i]<<" ";
    }
    return 0 ;
}