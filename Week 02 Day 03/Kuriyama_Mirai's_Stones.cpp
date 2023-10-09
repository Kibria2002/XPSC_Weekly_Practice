#include<bits/stdc++.h>
 
using namespace std;
 
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int n; cin >> n;
    vector<long long> v(n + 1), y(n + 1), z(n + 1);
    for (int a = 1; a <= n; a++)
    {
        cin >> v[a];
        y[a] = z[a] = v[a];
    }
    sort(y.begin() + 1, y.begin() + n + 1);
    for (int a = 1; a <= n; a++) {
        z[a] += z[a - 1];
        y[a] += y[a - 1];
    }
    int m; cin >> m;
    for (int a = 1; a <= m; a++)
    {
        int opt, l, r; cin >> opt >> l >> r;
        if (opt == 1) cout << z[r] - z[l - 1] << endl;
        else cout << y[r] - y[l - 1] << endl;
    }
 
    return 0;
}
