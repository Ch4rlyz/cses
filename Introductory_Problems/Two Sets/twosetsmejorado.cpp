#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;

    long long suma = 1LL * n * (n + 1) / 2;   // CAMBIO: Gauss en vez del loop, y no toca n
    if (suma % 2 != 0) {
        cout << "NO";
        return 0;
    }

    vector<int> primeros;
    long long contador = 0;                   // CAMBIO: long long
    int n0 = n;
    while (contador < suma / 2) {
        contador += n0;
        if (contador <= suma / 2) {
            primeros.push_back(n0);
        }
        else {
            contador -= n0;
        }
        n0 -= 1;
    }
    vector<bool> enPrimero(n + 1, false);
    for (int x : primeros) enPrimero[x] = true;

    cout << "YES\n";
    cout << primeros.size() << '\n';
    for (int x : primeros) cout << x << ' ';
    cout << '\n';

    cout << n - primeros.size() << '\n';
    for (int i = 1; i <= n; i++) {
        if (!enPrimero[i]) cout << i << ' ';
    }
    cout << '\n';
}