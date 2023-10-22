#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        char c;
        int n;
        string s;
        cin >> n >> c;
        cin >> s;
        s = ' ' + s + s;
        int mx = 0, last = 0;
        for (int i = 2 * n; i >= 1; i--) {
            if (s[i] == 'g')
                last = i;
            if (s[i] == c)
                mx = max(mx, last - i);
        }
        cout << mx << endl;
    }
    return 0;
}