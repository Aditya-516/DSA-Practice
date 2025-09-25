#include<iostream>
using namespace std ;
int sumofdigits(int n){
    if(n==0){
        return 0 ;
    }
    return (n%10)+sumofdigits(n/10);
}
int main(){
    int n ;
    cout<<"Enter the NUM : ";
    cin>>n;
    cout<<"The sum of digits : "<<sumofdigits()<<endl;
    return 0 ;
}