#include<iostream>
using namespace std ;
void ReverseString(string &s){
    int i = 0 ;
    int j = s.length()-1;
    while(i<j){
        swap(s[i],s[j]);
        i++;
        j--;
    }
}
int main(){
    string s = "Aditya" ;
    for(int i=0;i<s.size();i++){
        cout<<s[i]<<" ";
    }
    cout<<endl;
    ReverseString(s);
    for(int i=0;i<s.size();i++){
        cout<<s[i]<<" ";
    }
    return 0 ;
}