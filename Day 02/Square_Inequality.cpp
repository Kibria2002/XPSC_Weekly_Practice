#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int a, b, c; cin >> a >> b >> c;
    if((a * a + b * b) < c * c) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}