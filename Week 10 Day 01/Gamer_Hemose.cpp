#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n, h;
        cin >> n >> h;
        int a[n];
        for (int i = 0; i < n; ++i)
            cin >> a[i];
        sort(a, a + n);
        cout << (h / (a[n - 1] + a[n - 2]) * 2) + (h % (a[n - 1] + a[n - 2]) > 0) + (h % (a[n - 1] + a[n - 2]) > a[n - 1]) << endl;
    }
    return 0;
}