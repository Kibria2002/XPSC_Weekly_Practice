#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector<int> p;
    for (int i = 0; i < n; i++) {
        if (a[i] != x) {
        p.push_back(a[i]);
        }
    }
    for (int i = 0; i < p.size(); i++) {
        cout << p[i] << " ";
    }
    cout << endl;
    return 0;
}