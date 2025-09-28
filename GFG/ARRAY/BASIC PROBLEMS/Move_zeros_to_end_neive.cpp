#include<iostream>
#include<vector>
using namespace std ;
void MoveZerosToEnd(vector<int> &arr){
    vector<int> temp ;
    int n = arr.size();
    int j = 0 ; 
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            temp.insert(temp.begin()+j,arr[i]);
            j++;
        }
        else{
            temp.push_back(arr[i]);
        }
    }
    arr = temp ;
       
}
int main(){
    vector<int> arr={1, 2, 0, 4, 3, 0, 5, 0};
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    MoveZerosToEnd(arr);
    cout<<endl;
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;

}