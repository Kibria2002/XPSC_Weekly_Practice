#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string m;
        cin >> m;
        string g1("1"), s2("0");
        for (int i = 1; i < n; i++) {
            g1 += (g1[i - 1] == m[i - 1]) ? "0" : "1";
            s2 += (s2[i - 1] == m[i - 1]) ? "0" : "1";
        }
        int c1 = 0, c2 = 0;
        for (int i = 0; i < n; i++) {
            if (g1[i] == '1')
                c1++;
            if (s2[i] == '1')
                c2++;
        }
        cout << max(c2, c1) << endl;
    }
    return 0;
}