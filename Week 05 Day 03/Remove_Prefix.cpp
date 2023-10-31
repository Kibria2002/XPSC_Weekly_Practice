#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n, a = 0;
        cin >> n;
        map<int, int> b;
        for (int i = 1; i <= n; i++) {
            int l;
            cin >> l;
            if (b[l] > a)
                a = b[l];
            b[l] = i;
        }
        cout << a << endl;
    }
    return 0;
}