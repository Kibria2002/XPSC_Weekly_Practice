#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    long long n, s;
    cin >> n >> s;
    int t = 0;
    long long k = n;
    while (k > 0) {
        t += 9;
        k /= 10;
    }
    long long l = min(s + t, n);
    long long result = n - l;
    for (long long i = s; i <= l; ++i) {
        int d = 0;
        long long x = i;
        while (x > 0) {
            d += x % 10;
            x /= 10;
        }
        if (i - d >= s) {
            result++;
        }
    }
    cout << result << endl;
    return 0;
}