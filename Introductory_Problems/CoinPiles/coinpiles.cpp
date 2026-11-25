#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,a,b, mayor, menor;
    cin >> n;
    while(n--) {
        cin >> a >> b;
        mayor = a; menor = b;
        if (a<b) {
            mayor = b; menor = a;
        }
        if ((a+b) % 3 == 0 && (double)mayor/menor <= 2){
            cout << "YES" << "\n";
        }
        else if(a == 0 && b == 0) {
            cout << "YES" << "\n";
        }
        else {
            cout << "NO" << "\n";
        }
    }
}