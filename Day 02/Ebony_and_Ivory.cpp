#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int a, b, c; cin >> a >> b >> c;
    bool found = false;
    for(int i = 0; i <= c; i += a) {
        if ((c - i) % b == 0) {
            cout << "Yes" << endl;
            found = true;
            break;
        }
    }
    if (!found) cout << "No" << endl;
    return 0;
}
