#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    long long a, b;
    cin >> a >> b;
    int ans = 0;
    while (a <= b) {
        a *= 2;
        ans++;
    }
    cout << ans << endl;
    return 0;
}