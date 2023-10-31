#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int sum = 0, ans = n;
        for (int i = 0; i < n; i++) {
            sum += a[i];
            int s = 0, temp = i + 1, prev = i;
            for (int j = i + 1; j < n; j++) {
                s += a[j];
                if (s == sum) {
                    temp = max(temp, j - prev);
                    prev = j;
                    s = 0;
                }
            }
            if (s == 0) {
                ans = min(ans, temp);
            }
        }
        cout << ans << endl;
    }
    return 0;
}