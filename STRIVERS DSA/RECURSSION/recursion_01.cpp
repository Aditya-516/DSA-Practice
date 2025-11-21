#include<iostream>
using namespace std ;
int a = 0 ;
void fun(int a){
    if(a>20){
        return ;
    }
    cout<<a<<endl;
    a++;
    fun(a);
}
int main(){
    fun(a);
    return 0 ;
}