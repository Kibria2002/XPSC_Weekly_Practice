#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        unordered_map<int, int> m;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            for (int j = 2; j * j <= x; j++) {
                while (x % j == 0) {
                    m[j]++;
                    x /= j;
                }
            }
            if (x > 1)
                m[x]++;
        }
        int flag = 1;
        for (auto i : m) {
            if (i.second % n != 0) {
                cout << "NO" << endl;
                flag = 0;
                break;
            }
        }
        if (flag)
            cout << "YES" << endl;
    }
    return 0;
}