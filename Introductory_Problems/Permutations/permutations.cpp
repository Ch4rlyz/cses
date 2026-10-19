#include <bits/stdc++.h>
#include <string>
using namespace std;
 
int main() {
    ios::sync_with_stdio();
    cin.tie(0);
    int t,contador = 1;
    string st;
    cin >> t;
    if (t == 1) {
        cout << t;
    }
    else if (t <= 3) {
        cout << "NO SOLUTION";
    }
    else {
    while (t-contador > 1) {
    st += to_string(t) + " ";
    st += to_string(contador) + " ";
    t--;
    contador ++;
    }
    if (t != contador) {
    st += to_string(t);
    st = to_string(contador) + " "+ st ;
    }
    else {
        st = to_string(contador) + " " + st;
    }
cout << st;
}
}
