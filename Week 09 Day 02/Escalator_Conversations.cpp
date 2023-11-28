#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int s = 0;
        int n, m, k, h;
        cin >> n >> m >> k >> h;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (abs(h - x) % k == 0 && abs(h - x) / k < m && x != h) {
                s++;
            }
        }
        cout << s << endl;
    }
    return 0;
}