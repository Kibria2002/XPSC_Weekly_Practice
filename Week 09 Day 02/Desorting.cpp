#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n, ans = 2005104191;
        cin >> n;
        int a[n];
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }
        for (int i = 2; i <= n; i++) {
            ans = min(ans, max(0, (a[i] - a[i - 1] + 2) / 2));
        }
        cout << ans << endl;
    }
    return 0;
}