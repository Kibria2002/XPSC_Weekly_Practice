#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        if (i % 2 == 0) {
            cout << s[i];
        }
    }
    cout << endl;
    return 0;
}
