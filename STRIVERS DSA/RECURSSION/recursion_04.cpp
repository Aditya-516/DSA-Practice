#include<iostream>
using namespace std ;
void fun(int n){
    if(n<=0){
        return;
    }
    cout<<n<<endl;
    n--;
    fun(n);
}
int main(){
    int n ;
    cout<<"Enter the num : ";
    cin>>n;
    fun(n);
    return 0 ;
}