#include<iostream>
using namespace std ;
void ReverseArray(int arr[],int size){
    int Leftpointer = 0 ;
    int RightPointer = size-1;
    int temp ;
    while(Leftpointer<RightPointer){
        temp = arr[RightPointer];
        arr[RightPointer] = arr[Leftpointer];
        arr[Leftpointer] = temp ;
        Leftpointer ++ ;
        RightPointer -- ;
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