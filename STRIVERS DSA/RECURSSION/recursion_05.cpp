#include<iostream>
using namespace std ;
int fun(int n ,int sum = 0){
    if(n<=0){
        return sum ;
    }
    sum = sum + n ;
    n--;
    return fun(n,sum);
}
int main(){
    int n ;
    cout<<"Enter the Num : ";
    cin>>n;
    cout<<"The sum of NUm from ! to "<<n<<" is : "<<fun(n)<<endl;
    return 0;
}