#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) {
        string c = "YesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYes";
        string s;
        cin >> s;
        cout << (c.find((s)) != -1 ? "Yes\n" : "No\n");
    }
    return 0;
}