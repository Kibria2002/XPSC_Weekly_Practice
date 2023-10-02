#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    double a, b; cin >> a >> b;
    double dif = a - b;
    double dis = (100 * dif) / a;
    cout << dis << endl;
    return 0;
}