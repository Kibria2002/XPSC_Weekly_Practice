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
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (auto &i : a)
        {
            cin >> i;
            i %= k;
            if (i == 0)
                i = k;
        }
        vector<pair<int, int>> s;
        for (int i = 0; i < n; i++)
            s.push_back({-a[i], i});
        sort(s.begin(), s.end());
        for (auto i : s)
            cout << i.second + 1 << " ";
        cout << endl;
    }
    return 0;
}