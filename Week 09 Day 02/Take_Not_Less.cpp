#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        vector<long long> a(n);
        long long mx = INT_MIN, freq = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            mx = max(mx, a[i]);
        }
        for (int i = 0; i < n; i++) {
            if (a[i] == mx)
                freq += 1;
        }
        if (n == 1 or freq == 1)
            cout << "Marichka";
        else if (freq % 2 == 1)
            cout << "Marichka";
        else {
            int f = 1;
            map<int, int> mp;
            for (int x : a) {
                mp[x]++;
            }
            for (auto x : mp) {
                if (x.second % 2 == 1) {
                    f = 0;
                    break;
                }
            }
            if (f)
                cout << "Zenyk";
            else
                cout << "Marichka";
        }
        cout << endl;
    }
    return 0;
}