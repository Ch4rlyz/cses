#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    long long k;
    cin >> n >> m >> k;
    vector<long long> a(n), b(m);
    for (auto &x : a) cin >> x;
    for (auto &x : b) cin >> x;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int i = 0, j = 0, contador = 0;
    while (i < n && j < m) {
        if (b[j] < a[i] - k) j++;          // depa demasiado chico para esta persona
        else if (b[j] > a[i] + k) i++;     // depa demasiado grande para esta persona
        else { contador++; i++; j++; }     // le sirve: se emparejan
    }
    cout << contador << '\n';
}