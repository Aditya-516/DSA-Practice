#include<iostream>
using namespace std ;
void pattern(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout<<"*";
        }
        for(char ch='A';ch<='A'+i-1;ch++){
            cout<<ch;
        }
        for(char ch='A';ch<'A'+i-1;ch++){
            cout<<ch;
        }
        for(int j=1;j<=n-i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
int main(){
    int n ;
    cout<<"Enter the num : ";
    cin>>n;
    pattern(n);
    return 0 ;
}