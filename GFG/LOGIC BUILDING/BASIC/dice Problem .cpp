#include<bits/stdc++.h>
using namespace std;

int oppositeFaceOfDice(int n) {
  
    // Stores number on opposite face
    // of dice
    int ans = 7 - n;
    return ans;
}

int main() {
  
    int n = 2;
    cout << oppositeFaceOfDice(n);

    return 0;
}