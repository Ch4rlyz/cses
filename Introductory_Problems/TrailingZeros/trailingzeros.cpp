#include <bits/stdc++.h>
using namespace std;
 
int main () {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, contador = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        long long total = i* (i+1);
        if (total % 10 == 0) {
        total = total * (i+2);
        while(total % 10 == 0) {
            total = total / 10;
            contador += 1;
        }
        i= i+1;
        }
    } 
    cout << contador;
    }
    
