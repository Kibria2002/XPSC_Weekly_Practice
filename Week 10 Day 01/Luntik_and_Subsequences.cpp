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
        int n;
        cin >> n;
        vector<int> a(n);
        int z = 0;
        for (auto &x : a)
        {
            cin >> x;
            if (x == 0)
                z++;
        }
        long long y = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 1)
                y = y + pow(2, z);
        }
        cout << y << endl;
    }
    return 0;
}