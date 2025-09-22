#include <bits/stdc++.h>
using namespace std;

int nthTermOfAP(int a1, int a2, int n)
{
    // using formula to find the
    // Nth term t(n) = a(1) + (n-1)*d
    return (a1 + (n - 1) * (a2 - a1));
}

int main()
{
    int a1 = 2, a2 = 3;
    int n = 4;
    cout << nthTermOfAP(a1, a2, n);
    return 0;
}