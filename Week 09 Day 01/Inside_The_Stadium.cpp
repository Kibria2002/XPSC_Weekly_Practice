#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int runs = 0, ans = 0;
        for (int i = 1; i <= n; ++i) {
            int x;
            cin >> x;
            runs += x;
            ans += (runs == i);
        }
        cout << ans << endl;
    }
    return 0;
}