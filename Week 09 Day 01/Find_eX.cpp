#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        long long a, b, c, d;
        cin >> a >> b >> c >> d;
        long long m1 = a % b;
        long long m2 = (c % d);
        long long r1 = (b - m1);
        long long r2 = (d - m2);
        if (r1 == 1 && r2 == 1) {
            cout << 1 << endl;
            continue;
        }
        if ((r1 == 1) || (r2 == 1)) {
            long long z = (b * d);
            long long gc = __gcd(b, d);
            z /= gc;
            if (r1 == 1)
                cout << (z - m1) << endl;
            else
                cout << (z - m2) << endl;
        }
        else
            cout << 1 << endl;
    }
    return 0;
}