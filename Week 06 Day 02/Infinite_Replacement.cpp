#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        string s, t;
        cin >> s >> t;
        if (t == "a")
            cout << 1 << endl;
        else if (t.find('a') != -1)
            cout << -1 << endl;
        else
            cout << (long long)pow(2, s.size()) << endl;
    }
    return 0;
}