#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    const int MOD = 1e9 + 7;
    long long r = 1;
    for (int i = 0; i < n; i++) r = r * 2 % MOD;
    cout << r << '\n';
}