#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int w, l;
        cin >> w >> l;
        if (w % 2 != 0 && l % 2 != 0)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}