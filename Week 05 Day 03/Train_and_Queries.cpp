#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        long n, k;
        cin >> n >> k;
        map<int, pair<int, int>> mp;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (!mp.count(x)) {
                mp[x].first = i;
                mp[x].second = i;
            }
            else
                mp[x].second = i;
        }
        while (k--) {
            int c, d;
            cin >> c >> d;
            if (!mp.count(c) || !mp.count(d) || mp[c].first > mp[d].second) {
                cout << "NO" << endl;
            }
            else
                cout << "YES" << endl;
        }
    }
    return 0;
}