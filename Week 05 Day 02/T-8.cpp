#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        int x[a + 1], i, j, k = 0;
        for (i = 0; i < a; i++) {
            cin >> x[i];
        }
        sort(x, x + a);
        for (j = a - 1; j >= 0; j--) {
            k += x[j];
            if (k >= b)
                break;
        }
        if (j == -1)
            cout << "0\n";
        else
            cout << x[j] << endl;
    }
    return 0;
}