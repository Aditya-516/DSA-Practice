#include<iostream>
using namespace std ;
void SortCounter(int arr[],int size){
    int C0=0;
    int C1=0;
    int C2=0;
    for(int i=0;i<size;i++){
        if(arr[i]==0){
            C0++;
        }
        else if(arr[i]==1){
            C1++;
        }
        else{
            C2++;
        }
    }
    int j=0;
    for(int i=0;i<C0;i++){
        arr[j++]=0;
    }
    for(int i=0;i<C1;i++){
        arr[j++]=1;
    }
    for(int i=0;i<C2;i++){
        arr[j++]=2;
    }
}
int main(){
    int size = 12 ;
    int arr[size]={0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1};
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    SortCounter(arr,size);
    cout<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0 ;
}