#include<iostream>
using namespace std ;
void pattern(int n){
    int m = 5 ;
    for(int i=0;i<n;i++){
        for(int j=1;j<n-i+1;j++){
            cout<<" "<<" ";
        }
        for(int l=0;l<(2*i)+1;l++){
            cout<<"*"<<" ";
        }
        for(int k=1;k<n-i+1;k++){
            cout<<" "<<" ";
        }
        
        cout<<endl;
    }
}
int main(){
    int n ;
    cout<<"Enter the num : ";
    cin>>n;
    pattern(n);
    return 0 ;
}