#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int a, b;
    cin >> a >> b;
    if (a + b + (a * b) == 111)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}