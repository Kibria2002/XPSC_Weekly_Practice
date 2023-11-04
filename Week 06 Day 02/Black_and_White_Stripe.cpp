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
        string s;
        cin >> n >> k >> s;
        vector<int> v(n + 1);
        for (int i = 1; i <= n; i++)
        {
            if (s[i - 1] == 'W')
            {
                v[i]++;
            }
            v[i] += v[i - 1];
        }
        int ans = k;
        for (int i = 0; i <= n - k; i++)
        {
            ans = min(ans, v[i + k] - v[i]);
        }
        cout << ans << endl;
    }
    return 0;
}