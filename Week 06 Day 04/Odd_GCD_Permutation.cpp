#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (n % 2 != 0)
            cout << -1;
        else for (int i = n; i > 0; i--)
                cout << i << " ";
        cout << endl;
    }
    return 0;
}