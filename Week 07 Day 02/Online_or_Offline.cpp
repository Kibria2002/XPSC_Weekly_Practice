#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        double n, m, dis;
        cin >> n >> m;
        dis = (0.1) * n;
        n = n - dis;
        if (n < m)
            cout << "ONLINE" << endl;
        else if (n == m)
            cout << "EITHER" << endl;
        else
            cout << "DINING" << endl;
    }
    return 0;
}