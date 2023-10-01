#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int a, b, c; cin >> a >> b >> c;
    int s = ((a + c - 1) / c) * c;
    if(s <= b) {
        cout << s << endl;
    } else {
        cout << -1 << endl;
    }
    return 0;
}
