#include<iostream>
#include<cmath>
using namespace std ;
bool IsAplha(int x,int y){
    float res = log(y)/log(x);
    return res == floor(res);
}
int main(){
    int x,y;
    cout<<"Enter the num1 : ";
    cin>>x;
    cout<<"Enter the num1 : ";
    cin>>y;
    cout<<IsAplha(x,y);
    return 0;
}