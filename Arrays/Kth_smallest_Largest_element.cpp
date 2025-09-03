#include<iostream>
#include<bits/stdc++.h>
using namespace std ;
int KthSmallestElement(int arr[],int size,int k){
    priority_queue<int> MaxHeap;
    for(int i=0;i<size;i++){
        MaxHeap.push(arr[i]);
        if(MaxHeap.size()>k){
            MaxHeap.pop();
        }
    }
    return MaxHeap.top();
}
int KthLargestElement(int arr[],int size,int k){
    priority_queue<int,vector<int>,greater<int>>MinHeap;
    for(int i=0;i<size;i++){
        MinHeap.push(arr[i]);
        if(MinHeap.size()>k){
            MinHeap.pop();
        }
    }
    return MinHeap.top();
}
int main(){
    int size = 10 ;
    int arr[size] = {45,96,32,15,68,754,15,258,654,852};
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int k;
    cout<<"Enter the Index : ";
    cin>>k;
    cout<<"Kth smallest Element is : "<<KthSmallestElement(arr,size,k);
    cout<<endl;
    cout<<"Kth largest Element is : "<<KthLargestElement(arr,size,k);
    cout<<endl;
    return 0 ;

}