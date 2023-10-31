#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int m;
        cin >> m;
        int n = 1;
        while (n * 10 <= m) {
            n *= 10;
        }
        cout << m - n << endl;
    }
    return 0;
}