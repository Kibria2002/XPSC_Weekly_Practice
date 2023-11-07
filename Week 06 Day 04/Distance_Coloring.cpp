#include <bits/stdc++.h>

using namespace std;

const int MOD = 1e9+7;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;
        long long count = 1;
        for (int i = 0; i < n; i++) {
            if (k > 0) {
                count = (count * k) % MOD;
                k--;
            }
            else
                break;
        }
        cout << count << endl;
    }
    return 0;
}