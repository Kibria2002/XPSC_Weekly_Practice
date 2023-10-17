#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) {
        int k, n;
        cin >> k >> n;
        for(int i = 1; i <= k; i++)
            cout << min(1 + i * (i - 1) / 2, n - k + i) << " ";
        cout << endl;
    }
    return 0;
}
