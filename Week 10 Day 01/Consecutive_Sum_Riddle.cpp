#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        long long num;
        cin >> num;
        cout << -num + 1 << ' ' << num << endl;
    }
    return 0;
}