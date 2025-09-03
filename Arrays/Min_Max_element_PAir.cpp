#include<iostream>
using namespace std;
struct Pair{
    int min ;
    int max ;
};
struct Pair GetMinMax(int arr[],int size){
    struct Pair minmax ;
    int i ;
    if(size % 2 ==0){
        if(arr[0]<arr[1]){
            minmax.min = arr[0];
            minmax.max = arr[1];
        }
        else{
            minmax.min = arr[1];
            minmax.max = arr[0];
        }
        i = 2 ;
    }
    else{
        minmax.max = arr[0] ;
        minmax.min = arr[0] ;
        i = 1 ;
    }
    while(i<size-1){
        if(arr[i]<arr[i+1]){
            if(arr[i]<minmax.min){
                minmax.min = arr[i];
            }
            if(arr[i+1]>minmax.max){
                minmax.max = arr[i+1];
            }
        }
        else{
            if(arr[i+1]>minmax.max){
                minmax.max = arr[i+1];
            }
            if(arr[i]<minmax.min){
                minmax.min = arr[i];
            }
        }
        i = i+2 ;
    }
    return minmax ;
}
int main() {
    int size = 10;
    int arr[size] = {25, 48, 36, 78, 24, 95, 16, 38, 59, 89};

    cout << "Array: ";
    for(int i=0; i<size; i++) {
        cout << arr[i] << " ";
    }
    cout<<endl;
    Pair minmax = GetMinMax(arr,size);
    cout<<"Min Element = "<<minmax.min <<endl;
    cout<<"Max Element = "<<minmax.max <<endl;
    return 0 ;
}