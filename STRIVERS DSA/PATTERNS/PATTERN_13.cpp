#include<iostream>
using namespace std ;
void pattern(int n){
    int start = 1 ;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<start<<" ";
            start++;
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