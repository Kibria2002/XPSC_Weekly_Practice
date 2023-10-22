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
        if (n == 3)
            cout << "-1";
        else
        {
            cout << n << " " << n - 1 << " ";
            for (int i = 0; i < n - 2; i++)
            {
                cout << i + 1 << " ";
            }
        }
        cout << endl;
    }
    return 0;
}