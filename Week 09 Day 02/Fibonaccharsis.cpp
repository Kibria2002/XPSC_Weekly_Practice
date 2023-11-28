#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n, k, s = 0;
        cin >> n >> k;
        for (int i = 1; i <= n; i++) {
            int c = n, f = i, h = 1;
            for (int j = 0, x; j < k - 2; j++) {
                x = f;
                f = c - x;
                c = x;
                h &= f <= c;
                h &= min(f, c) >= 0;
                if (!h)
                    break;
            }
            if (h)
                s++;
        }
        cout << s << endl;
    }
    return 0;
}