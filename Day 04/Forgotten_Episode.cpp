#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int n;
    cin >> n;
    vector<bool> watched(n+1, false);
    for (int i = 0; i < n-1; ++i) {
        int episode;
        cin >> episode;
        watched[episode] = true;
    }
    for (int i = 1; i <= n; ++i) {
        if (!watched[i]) {
            cout << i << endl;
            break;
        }
    }
    return 0;
}