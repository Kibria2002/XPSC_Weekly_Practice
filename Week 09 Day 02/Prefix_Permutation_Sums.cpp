#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        long long n, x, y = 0;
        cin >> n;
        set<long long> s;
        long long sum = n * (n + 1) / 2;
        for (int i = 0; i < n - 1; i++) {
            cin >> x;
            if (x - y <= n)
                s.insert(x - y);
            y = x;
        }
        int f = 0;
        if (x != sum)
            f = 1;
        if (s.size() == n - 2 + f)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}