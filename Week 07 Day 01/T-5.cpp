#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n;
    cin >> n;
    cout << n / 2 << endl;
    while (n > 3) {
        cout << 2 << " ";
        n = n - 2;
    }
    cout << n;
    return 0;
}