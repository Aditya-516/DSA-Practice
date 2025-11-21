#include<iostream>
using namespace std ;
int fun(int n){
    if(n<=1){
        return 1 ;
    }
    return n * fun(n-1);
}
int main(){
    int n ;
    cout<<"Enter the num : ";
    cin>>n;
    cout<<"The Factorial of  "<<n<<" is :"<<fun(n)<<endl;
    return 0 ;
}