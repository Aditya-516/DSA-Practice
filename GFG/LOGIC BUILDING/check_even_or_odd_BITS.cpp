#include<iostream>
using namespace std ;
int main(){
    int n ;
    cout<<"Enter the NUM : ";
    cin>>n;
    if((n&1)==0){
        cout<<n<<" is a even num "<<endl;
    }
    else{
        cout<<n<<" Is a odd num "<<endl;
    }
    return 0 ;
}