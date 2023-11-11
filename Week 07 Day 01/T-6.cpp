#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    long long n, k, d;
    set<long long> a;
    cin >> n >> k;
    for (d = 1; d * d <= n; d++)
        if (n % d == 0)
            a.insert({d, n / d});
    if (k <= a.size())
        cout << *next(a.begin(), k - 1);
    else
        cout << -1;
    return 0;
}