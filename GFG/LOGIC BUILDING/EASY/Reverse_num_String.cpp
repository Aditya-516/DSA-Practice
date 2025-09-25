#include<iostream>
#include<bits/stdc++.h>
using namespace std ;
int main(){
    int n ;
    cout<<"Enter the num : ";
    cin>>n;
    string s = to_string(n) ;
    reverse(s.begin(),s.end());
    n = stoi(s);
    cout<<"Reverse num : "<<n<<endl;
    return 0 ;

}