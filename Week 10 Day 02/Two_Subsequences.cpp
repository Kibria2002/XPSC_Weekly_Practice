#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        auto c = min_element(s.begin(), s.end());
        cout << *c << " ";
        s.erase(c);
        cout << s << endl;
    }
    return 0;
}