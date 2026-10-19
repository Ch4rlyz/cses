#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int k, n2, n3, n4;
    long long total ,resultado;
    cin >> k;
    for (long long i = 1; i<=k; i++) {
        if (i == 1) {
            cout << 0 << ("\n");  
        }
        else if (i==2) {
            cout << 6  << ("\n");
        }
        else if (i == 3) {
            cout << 28  << ("\n");
        }
        else if (i == 4) {
            cout << 96 << ("\n");
        }
        else {
        total = (i*i*(i*i-1))/2, n2 = (i-3)*4, n3 = (i-4)*4, n4 = (i-4)*(i-4);
        resultado = total - 2*n2 - 3*n3 - 4*n4 - 16;
        cout << (i % 2 == 0 ? resultado : resultado) << "\n";
    }
 }   
}
