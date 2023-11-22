#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        int ans{};
        for (int i{}; i < n; i++)
            cin >> a[i];
        for (int i{}; i < n; i++)
            cin >> b[i];
        for (int i{}; i < n; i++)
            if (a[i] <= 2 * b[i])
                if (b[i] <= 2 * a[i])
                    ans++;
        cout << ans << endl;
    }
    return 0;
}