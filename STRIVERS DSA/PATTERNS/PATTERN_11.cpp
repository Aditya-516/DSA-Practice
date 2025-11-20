#include<iostream>
using namespace std ;
void pattern(int n){
    int start = 1 ;
    for(int i=1;i<=n;i++){
        if(i%2==0){
            start = 0 ;
        }
        else{
            start = 1 ;
        }
        for(int j=1;j<=i;j++){
            cout<<start;
            start = 1 - start ;
        }
        cout<<endl;
    }
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=i;j++){
    //         if(i%2==0 && j%2==0){
    //             cout<<"1";
    //         }
    //         else if(i%2==0 && j%2!=0){
    //             cout<<"0";
    //         }
    //         else if(i%2!=0 && j%2!=0){
    //             cout<<"1";
    //         }
    //         else if(i%2!=0 && j%2==0){
    //             cout<<"0";
    //         }
    //     }
    //     cout<<endl;
    // }
}
int main(){
    int n ;
    cout<<"Enter the num : ";
    cin>>n;
    pattern(n);
    return 0 ;
}