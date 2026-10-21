#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m, k, a , b, contador = 0, contador1 = 0;
    int mayor = 0, menor = 10e9, mayor1 = 0, menor1 = 10e9;
    cin >> n >> m >> k;
    vector<int> expectativa;
    while(n--) {
        cin >> a;
        expectativa.push_back(a);
        if (a < menor) {
            menor = a;
        }
        if (a > mayor) {
            mayor = a;
        }     
}
mayor = mayor + k;
menor = menor - k;
    while (m--) {
        cin >> b;
        if ((b >= menor) && (b <= mayor)) {
            contador += 1;
            if (b < menor1) {
            menor1 = b;
            }
            if (b > mayor1) {
            mayor1 = b;
           }     
        }
    }
mayor1 = mayor1 + k;
menor1 = menor1 - k;
    for (int x : expectativa) {
        if ((x >= menor1) && (x <= mayor1)) {
            contador1 += 1;
        }
    }
    cout << min(contador, contador1);
}
