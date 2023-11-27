#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        int one = 0;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            one += a[i];
        }
        int zero = n - one;
        if (n % 2 || one == 0)
            cout << "-1" << endl;
        else if (one == n && n == 2)
            cout << "-1" << endl;
        else if (zero == one)
            cout << 0 << endl;
        else {
            if (zero > one){
                cout << ((zero - one) / 2) << endl;
            }
            else {
                int dif = (one - zero);
                int rem = (dif % 4);
                int move = 0;
                if (rem == 2)
                    move += 2;
                move += dif / 4;
                cout << move << endl;
            }
        }
    }
    return 0;
}