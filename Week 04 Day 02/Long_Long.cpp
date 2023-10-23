#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        long long n, f = 1, sum = 0, count = 0;
        cin >> n;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            sum += abs(x);
            if (x > 0) {
                f = 1;
            }
            if (x < 0) {
                count += f;
                f = 0;
            }
        }
        cout << sum << ' ' << count << endl;
    }
    return 0;
}