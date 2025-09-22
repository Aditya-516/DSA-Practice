#include<iostream>
using namespace std ;
int main(){
    int n ;
    cout<<"Enter the NUM : ";
    cin>>n;
    int sum ;
    sum = ((n*(n+1))/2)*(2*n+1)/3;
    cout<<sum<<endl;
    return 0 ;
}