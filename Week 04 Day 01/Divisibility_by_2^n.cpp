#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int cnt = 0;
        priority_queue<int> pq;
        for (int i = 1; i <= n; i++) {
            int t;
            cin >> t;
            while (t % 2 == 0) {
                t /= 2;
                cnt++;
            }
            int i1 = i, tp = 0;
            while (i1 % 2 == 0) {
                i1 /= 2;
                tp++;
            }
            pq.push(tp);
        }
        int ans = 0;
        while (cnt < n && !pq.empty()) {
            cnt += pq.top();
            ans++;
            pq.pop();
        }
        if (cnt < n) cout << "-1" << endl;
        else cout << ans << endl;
    }
    return 0;
}