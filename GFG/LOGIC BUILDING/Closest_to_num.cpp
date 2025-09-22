#include <iostream>
#include <cmath>
using namespace std;

int closestDivisible(int n, int m) {
    int q = n / m;
    int n1 = m * q;
    int n2;
    if (n * m > 0) 
        n2 = m * (q + 1);
    else 
        n2 = m * (q - 1);

    // Check which is closer
    if (abs(n - n1) < abs(n - n2))
        return n1;
    else if (abs(n - n1) > abs(n - n2))
        return n2;
    else
        return (abs(n1) > abs(n2)) ? n1 : n2;  // tie → pick larger absolute value
}

int main() {
    int n, m;
    cout<<"Enter num 1 : ";
    cin >> n ;
    // cout<<endl;
    cout<<"Enter the num 2 : ";
    cin>>m;
    // cout<<endl;
    cout << closestDivisible(n, m) << endl;
    return 0;
}
