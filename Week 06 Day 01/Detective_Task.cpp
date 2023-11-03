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
        string s;
        cin >> s;
        int p1 = 0, p2 = s.length() - 1;
        while (s[p2] != '1' && p2 != 0)
            p2--;
        while (s[p1] != '0' && p1 != s.length() - 1)
            p1++;
        cout << p1 - p2 + 1 << endl;
    }
    return 0;
}