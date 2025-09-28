#include<iostream>
#include<vector>
using namespace std ;
void Subarray(vector<int>arr){
    for(int i=0;i<arr.size();i++){
        for(int j=i;j<arr.size();j++){
            for(int k=i;k<=j;k++){
                cout<<arr[k]<<" ";
            }
            cout<<endl;
        }
    }
}
int main(){
    vector<int> arr={1,2,3,4};
    cout<<"Array : ";
    for(int val : arr){
        cout<<val<<" ";
    }
    cout<<endl;
    cout<<"All the Subarray : "<<endl;
    Subarray(arr);
    return 0 ;
}