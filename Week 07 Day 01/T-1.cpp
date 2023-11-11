#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    long long n, a, b, p, q;
    cin >> n >> a >> b >> p >> q;
    cout << p * (n / a) + q * (n / b) - min(p, q) * (n / ((a * b) / __gcd(a, b)));
    return 0;
}