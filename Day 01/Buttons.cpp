#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int a, b; cin >> a >> b;
    int max_coin = max(a, b);
    if(a == max_coin) a--;
    else b--;
    max_coin += max(a, b);
    cout << max_coin << endl;
    return 0;
}

