#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        sort(a + 1, a + n + 1);
        int sum = 0, h = a[1];
        for (int i = 2; i <= n; i++) {
            int up = min(a[i] - a[i - 1], (k - sum) / (i - 1));
            sum += up * (i - 1);
            h += up;
        }
        cout << (k - sum) / n + h << endl;
    }
    return 0;
}