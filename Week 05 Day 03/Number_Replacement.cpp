#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n, x = 1;
        cin >> n;
        vector<int> a(n);
        string s;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        cin >> s;
        for (int i = 0; i < n; i++)
            for (int j = i + 1; j < n; j++)
                if (a[i] == a[j] && s[i] != s[j])
                    x = 0;
        if (x) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}