#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        long long n, m;
        cin >> n >> m;
        while (__gcd(n, m) > 1) {
            m /= __gcd(n, m);
        }
        if (m > 1)
            cout << "No\n";
        else
            cout << "Yes\n";
    }
    return 0;
}