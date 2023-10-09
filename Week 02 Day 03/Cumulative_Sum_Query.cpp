#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int n, q;
    cin >> n;
    vector<int> a(n);
    for(int &num : a) cin >> num;
    for(int i = 1; i < n; ++i) a[i] += a[i - 1];
    cin >> q;
    while(q--) {
        int i, j;
        cin >> i >> j;
        cout << (i == 0 ? a[j] : a[j] - a[i - 1]) << endl;
    }
    return 0;
}