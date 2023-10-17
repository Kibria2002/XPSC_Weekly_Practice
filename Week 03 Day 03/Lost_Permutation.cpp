#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) {
        int a, b;
        cin >> a >> b;
        vector<int> q(a);
        int sum = 0, m = 0;
        for(int i = 0; i < a; i++) {
            cin >> q[i];
            m = max(m, q[i]);
            sum += q[i];
        }
        while(m * (m + 1) / 2 < sum + b) {
            m++;
        }
        if(m * (m + 1) / 2 == sum + b) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
