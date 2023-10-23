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
        vector<vector<int>> adj(n + 1);
        for (int i = 0, u, v; i < n - 1; i++)
        {
            cin >> u >> v;
            adj[u].emplace_back(v);
            adj[v].emplace_back(u);
        }
        vector<int> cnt(n + 1, -1);
        function<int(int, int)> dfs = [&](int u, int f) -> int
        {
            int res = 0;
            for (int v : adj[u])
            {
                if (v == f)
                    continue;
                res += dfs(v, u);
            }
            return cnt[u] = res ? res : 1;
        };
        dfs(1, 0);
        int q;
        cin >> q;
        for (int i = 0, x, y; i < q; i++)
        {
            cin >> x >> y;
            cout << 1ll * cnt[x] * cnt[y] << endl;
        }
    }
    return 0;
}