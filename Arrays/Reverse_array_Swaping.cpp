#include<iostream>
using namespace std ;
void ReverseArray(int arr[],int size){
    for(int i=0;i<size/2;i++){
        swap(arr[i],arr[size-1-i]);
    }
}
int main(){
    int size = 10 ;
    int arr[size]={12,24,36,48,60,72,84,96,108,120};
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    ReverseArray(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0 ;
}