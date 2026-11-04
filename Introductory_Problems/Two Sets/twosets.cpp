#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio;
    cin.tie(0);
    int n,ncopy, suma = 0, resultado = 0;
    vector<int> enteros;
    cin >> n;
    vector<bool> consumidos(n,false);
    ncopy = n;
    while (ncopy--) {
    enteros.push_back(ncopy+1);
    suma += ncopy+1;
}
    ncopy = n;
    if (suma % 2 != 0) {
        cout << "NO";
        return 0;
    }
    suma = suma /2;
    while (resultado < suma-n-1) {
        resultado += n;
        consumidos[ncopy-n] = true;
        n--;
    }
    for (bool p : consumidos) {
        cout << p;
    }

} 