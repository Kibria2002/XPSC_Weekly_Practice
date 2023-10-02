#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int a, b, t; cin >> a >> b >> t;
    int time = t + 1;
    cout << (t / a) * b << endl;
    return 0;
}