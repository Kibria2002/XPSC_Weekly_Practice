#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        long long k = 0;
        vector<long long> v;
        for (int i = 0; i < n; i++) {
            if (s[i] == 'L') {
                v.push_back((n - 1 - i) - i);
                k += i;
            }
            else {
                v.push_back(i - (n - 1 - i));
                k += n - 1 - i;
            }
        }
        sort(v.begin(), v.end(), greater<int>());
        for (int i = 0; i < n; i++) {
            if (v[i] > 0) {
                k += v[i];
            }
            cout << k << ' ';
        }
        cout << endl;
    }
    return 0;
}