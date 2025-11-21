#include<iostream>
using namespace std ;
void fun(int n,int st=1){
    if(st>=n){
        return ;
    }
    cout<<st<<endl;
    st++;
    fun(n,st);
}
int main(){
    int n ;
    cout<<"Enter the num : ";
    cin>>n;
    fun(n);
    return 0 ;
}