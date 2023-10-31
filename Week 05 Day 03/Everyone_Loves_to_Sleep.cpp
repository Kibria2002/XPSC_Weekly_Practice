#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n, h, m;
        cin >> n >> h >> m;
        int tm = h * 60 + m;
        int a = 1499;
        while (n--) {
            cin >> h >> m;
            int p = h * 60 + m;
            if (p < tm)
                p += (24 * 60);
            a = min(a, p - tm);
        }
        cout << a / 60 << " " << a % 60 << endl;
    }
    return 0;
}