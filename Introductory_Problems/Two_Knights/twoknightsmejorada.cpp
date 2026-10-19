#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    for (long long k = 1; k <= n; k++) {
        long long total = k*k*(k*k - 1) / 2;
        long long n2 = (k-3)*4, n3 = (k-4)*4, n4 = (k-4)*(k-4);
        cout << total - 2*n2 - 3*n3 - 4*n4 - 16 << '\n';
    }
}