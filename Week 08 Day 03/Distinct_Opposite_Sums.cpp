#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n;
    cin >> n;
    while (n--) {
        int a;
        cin >> a;
        for (int i = a; i > a / 2; i--)
            cout << i << " ";
        for (int i = 1; i <= a / 2; i++)
            cout << i << " ";
        cout << endl;
    }
    return 0;
}