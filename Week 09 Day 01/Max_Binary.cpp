#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;
        string str = " ";
        string st;
        cin >> st;
        if (st[0] == '0') {
            st[0] = '1';
            k--;
        }
        long long a = 0;
        while (k > 0) {
            st += '0';
            k--;
        }
        cout << st << endl;
    }
    return 0;
}