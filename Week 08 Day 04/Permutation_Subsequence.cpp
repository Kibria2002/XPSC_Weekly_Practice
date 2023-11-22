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
        vector<int> v;
        unordered_map<int, int> m;
        int x;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            v.push_back(x);
        }
        for (int i = 0; i < n; i++)
        {
            m[v[i]]++;
        }
        long long int t = 1, sum = 0;
        for (int i = 1; i <= n; i++)
        {
            if (m[i] == 0)
                break;
            t = (t * m[i]) % 1000000007;
            sum = (sum + t) % 1000000007;
        }
        cout << sum << endl;
    }
    return 0;
}