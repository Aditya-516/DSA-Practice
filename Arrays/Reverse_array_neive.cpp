#include<iostream>
using namespace std ;
void ReverseArray(int arr[],int size){
    int TempArray[size];
    for(int i=0;i<size;i++){
        TempArray[size-1-i]=arr[i];
    }
    for(int i=0;i<size;i++){
        arr[i]=TempArray[i];
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