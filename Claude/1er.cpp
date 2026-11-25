#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, anterior = 0, total;
    cin >> n;
    for (int  i = 1; i<=n;i++) {
        total = i*i + anterior;
        anterior =  total;
        cout << total << '\n';
    }

}