#include<iostream>
using namespace std ;
void pattern(int n){
    int start = 65 ;
    for(int i=1;i<=n;i++){
        // for(int j=1;j<=i;j++){
        //     cout<<char(start)<<" ";
        //     start++;
        // }
        for(char ch='A';ch<='A'+i;ch++){
            cout<<ch<<" ";
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