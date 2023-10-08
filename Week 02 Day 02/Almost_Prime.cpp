#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int n; cin >> n;
    vector<int> primes;
    vector<bool> is_prime(n+1, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i <= n; ++i) {
        if (is_prime[i]) {
            primes.push_back(i);
            for (int j = i * i; j <= n; j += i) {
                is_prime[j] = false;
            }
        }
    }
    int cnt = 0;
    for (int i = 6; i <= n; ++i) {
        int divisors = 0;
        for (int p : primes) {
            if (p > i) break;
            if (i % p == 0) divisors++;
        }
        if (divisors == 2) cnt++;
    }
    cout << cnt << endl;
    return 0;
}