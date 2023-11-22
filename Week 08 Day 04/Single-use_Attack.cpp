#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n;
    cin >> n;
    while (n--) {
        int a, b, c;
        cin >> a >> b >> c;
        int d = a - c;
        if (d % b == 0) {
            cout << d / b + 1 << endl;
        }
        else {
            cout << d / b + 2 << endl;
        }
    }
    return 0;
}