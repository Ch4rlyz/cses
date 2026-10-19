#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        long long y, x;
        cin >> y >> x;
        long long m = max(y, x);
        long long diag = m * (m - 1) + 1;          // número en (m, m)
        long long k = m - min(y, x);               // distancia a la diagonal
        bool sumar = (m % 2 == 0) == (m == y);
        cout << (sumar ? diag + k : diag - k) << '\n';
    }
}
