#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n], b[n], flag = 1, dif = 0;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];
        for (int i = 0; i < n; i++)
            dif = max(a[i] - b[i], dif);
        for (int i = 0; i < n; i++)
            if (a[i] - b[i] < dif && b[i])
                flag = 0;
        cout << ((flag && dif >= 0) ? "YES\n" : "NO\n");
    }
    return 0;
}