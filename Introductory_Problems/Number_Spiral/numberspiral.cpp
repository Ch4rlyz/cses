#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a;
    cin >> a;
 
    while (a--) {
        int suma = 1, b, c;
        cin >> b >> c;
        if (b == 1 && c == 1) {
            cout << 1 << "\n";
        } 
        else {
             int maximo = max(b,c), minimo = min(b,c);
            for (int i = 2; i<= maximo; i++) {
                suma = suma + 2*(i-1);
            }
            if (((maximo % 2 == 0) && (maximo == b)) || ((maximo % 2 != 0) && (maximo == c))) {
                cout << suma + maximo - minimo << "\n";
            }
            else {
                cout << suma -maximo + minimo << "\n";
            }
        }
      }
