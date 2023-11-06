#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int b1, b2, b3;
        cin >> b1 >> b2 >> b3;
        int sum = b1 + b2 + b3;
        if (sum <= 1)
            cout << "Water filling time" << endl;
        else
            cout << "Not now" << endl;
    }
    return 0;
}