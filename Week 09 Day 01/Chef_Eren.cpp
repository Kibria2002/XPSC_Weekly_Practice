#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n, a, b, sum = 0;
        cin >> n >> a >> b;
        for (int j = 1; j <= n; j++) {
            if (j % 2 == 0) {
                sum += a;
            }
            else {
                sum += b;
            }
        }
        cout << sum << endl;
    }
    return 0;
}