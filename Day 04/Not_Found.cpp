#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    string s;
    cin >> s;
    bool letters[26] = {false};
    for (char c : s) {
        letters[c - 'a'] = true;
    }
    char ans = 'a';
    while (ans <= 'z' && letters[ans - 'a']) {
        ans++;
    }
    if (ans > 'z') {
        cout << "None" << endl;
    } else {
        cout << ans << endl;
    }
    return 0;
}
