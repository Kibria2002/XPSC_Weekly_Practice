#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, gcd;
        cin >> n;
        cin >> gcd;
        for (int i = 2; i <= n; i++)
        {
            cin >> x;
            gcd = __gcd(gcd, x);
        }
        if (gcd == 1)
            cout << 0;
        else if (__gcd(gcd, n) == 1)
            cout << 1;
        else if (__gcd(gcd, n - 1) == 1)
            cout << 2;
        else
            cout << 3;
        cout << '\n';
    }
    return 0;
}