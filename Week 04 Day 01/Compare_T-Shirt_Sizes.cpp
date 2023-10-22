#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        string s1, s2;
        cin >> s1 >> s2;
        if (s1 == s2) {
            cout << "= \n";
            continue;
        }
        if (s1[s1.size() - 1] == s2[s2.size() - 1]) {
            if (s1[s1.size() - 1] == 'S') {
                cout << (s1.size() > s2.size() ? "< \n" : "> \n");
            }
            else {
                cout << (s1.size() < s2.size() ? "< \n" : "> \n");
            }
        }
        else {
            if (s1[s1.size() - 1] == 'S' || s2[s2.size() - 1] == 'L') {
                cout << "< \n";
            }
            else {
                cout << "> \n";
            }
        }
    }
    return 0;
}