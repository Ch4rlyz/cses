#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long n, a, a0 = 0, contador = 0;
    cin >> n;
    while (n--) {
        cin >> a;
        contador += (a0 > a ? ((a0-a)) : 0);
        (a0 > a ? a = a0 : a = a);
        a0 = a;
    }
    cout << contador;
}
