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

        string s;
        cin >> s;

        int o = 0, z = 0;
        for (auto itr : s)
        {
            if (itr == '1')
                o++;
            else
                z++;
        }

        int cnt = min(o, z);

        if (cnt & 1)
            cout << "Zlatan" << endl;
        else
            cout << "Ramos" << endl;
    }
    return 0;
}