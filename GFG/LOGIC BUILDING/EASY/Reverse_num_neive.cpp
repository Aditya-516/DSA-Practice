#include<iostream>
using namespace std ;
int ReverseNum(int n){
    int lastDigit;
    int res = 0 ;
    while(n!=0){
        lastDigit = n%10;
        n = n/10;
        res = (res*10)+lastDigit ;
    }
    return res;
}
int main(){
    int n ;
    cout<<"Enter the num : ";
    cin>>n;
    cout<<"Reverse num : "<<ReverseNum(n)<<endl;
    return 0 ;

}