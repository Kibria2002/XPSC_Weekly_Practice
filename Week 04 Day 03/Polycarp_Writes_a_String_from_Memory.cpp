#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        set<char> q;
        long long sum = 1;
        for (int i = 0; i < s.size(); i++) {
            q.insert(s[i]);
            if (q.size() == 4) {
                q.clear();
                q.insert(s[i]);
                sum++;
            }
        }
        cout << sum << endl;
    }
    return 0;
}