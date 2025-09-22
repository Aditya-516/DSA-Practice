#include<iostream>
using namespace std ;
int main(){
    int n ;
    cout<<"Enter the NUM-1 : ";
    cin>>n;
    int m ;
    cout<<"Enter the NUM-2 : ";
    cin>>m;
    n = n ^ m ;
    m = n ^ m ;
    n = n ^ m ;
    cout<<"Num 1: "<<n;
    cout<<endl;
    cout<<"Num 2: "<<m;

    return 0 ;
}