#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int s11, p11;
        cin >> s11 >> p11;
        int s12 = 100 - 1 * s11;
        int d12 = 200 - 2 * p11;
        if (s12 > d12)
            cout << "SECOND" << endl;
        else if (s12 < d12)
            cout << "FIRST" << endl;
        else
            cout << "BOTH" << endl;
    }
    return 0;
}