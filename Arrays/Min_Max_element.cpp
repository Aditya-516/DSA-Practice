#include<iostream>
using namespace std ;
int MinElement(int arr[],int size){
    int min = arr[0] ;
    for(int i=0 ;i<size;i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    return min ;
}
int MaxElement(int arr[],int size){
    int max = arr[0] ;
    for(int i=0 ;i<size;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max ;
}
int main(){
    int size  = 10 ;
    int arr[size] = {25,48,36,78,24,95,16,38,59,89};
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Max Element : ";
    cout<<MaxElement(arr,size)<<endl;
    cout<<"Min Element : ";
    cout<<MinElement(arr,size)<<endl;
    return 0 ;
}