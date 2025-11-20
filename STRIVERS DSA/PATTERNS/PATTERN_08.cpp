#include<iostream>
using namespace std ;
void pattern(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<i;j++){
            cout<<" ";
        }
        for(int k=1;k<=2*(n-i)+1;k++){
            cout<<"*";
        }
        for(int j=1;j<i;j++){
            cout<<" ";
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