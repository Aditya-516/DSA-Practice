#include<iostream>
using namespace std ;
bool CheckIfPrime(int n){
    if(n==2 || n==3){
        return true ;
    }
    if(n<=1 ||n%2==0 ||n%3==0){
        return false ;
    }
    for(int i=5;i*i<n;i+=6){
        if(n%i==0){
            return false ;
        }
    }
    return true ;
}
int main(){
    int n ;
    cout<<"Enter the Num : ";
    cin>>n;
    if(CheckIfPrime(n)){
        cout<<"The NUM "<<n<<" is a Prime NO ";
    }
    else{
        cout<<"Not a prime no ";
    }
    return 0 ;
}