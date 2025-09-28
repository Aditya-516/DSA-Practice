#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
     vector<int> arr = { 10, 20, 20, 20, 30 };
    int ele = 20;
    auto it = find(arr.begin(),arr.end(),ele);
    if(it==arr.end()){
        cout<<"Element not found !";
    }
    else{
        arr.erase(it);
    }
    for(auto it : arr){
        cout<<it<<" ";
    }
    return 0;
}
