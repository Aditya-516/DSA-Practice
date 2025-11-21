#include<iostream>
using namespace std ;
int fun(int n){
    if(n<=0){
        return 0 ;
    }
    return n + fun(n-1);
}
int main(){
    int n ;
    cout<<"Enter the num : ";
    cin>>n;
    cout<<"The sum Of num From o to "<<n<<" is :"<<fun(n)<<endl;
    return 0 ;
}