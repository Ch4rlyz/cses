#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    set<int> norep;
    int n, x;
    cin >> n;
    while (n--){
        cin >> x;
        norep.insert(x);
    }
    
    cout << norep.size();
    }


