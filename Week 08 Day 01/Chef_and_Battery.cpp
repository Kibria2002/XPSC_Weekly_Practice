#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        int ans = 0;
        if (N < 50) {
            int d = (50 - N + 1) / 2;
            ans += d;
            N += d * 2;
        }
        else {
            int d = (N - 50) / 3;
            ans += d;
            N -= d * 3;
        }
        if (N == 51)
            ans += 2;
        else if (N == 52)
            ans += 4;
        cout << ans << endl;
    }
    return 0;
}