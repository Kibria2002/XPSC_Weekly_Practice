#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        set<string> cnt;
        for(int i = 1; i < n; ++i) {
            cnt.insert(s.substr(i - 1, 2));
        }
        cout << cnt.size() << endl;   
    }
    return 0;
}