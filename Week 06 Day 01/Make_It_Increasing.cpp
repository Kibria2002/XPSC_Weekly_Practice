#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int x;
        cin >> x;
        int a[x], ans = 0;
        for (auto &i : a)
            cin >> i;
        for (int i = x - 2; i >= 0; i--) {
            while (a[i] != a[i] / 2 && a[i] >= a[i + 1]) {
                a[i] /= 2;
                ans++;
            }
            if (a[i] >= a[i + 1]) {
                ans = -1;
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}