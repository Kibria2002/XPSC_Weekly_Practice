#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int m;
        cin >> m;
        string s;
        cin >> s;
        string name = "Timur";
        sort(name.begin(), name.end());
        sort(s.begin(), s.end());
        cout << (s == name ? "YES" : "NO") << endl;
    }
    return 0;
}
