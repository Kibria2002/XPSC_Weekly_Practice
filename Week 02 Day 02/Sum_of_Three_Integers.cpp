#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int k, s; cin >> k >> s;
    int count = 0;
    for (int i = 0; i <= k; i++) {
        for (int j = 0; j <= k; j++) {
            int z = s - i - j;
            if (z >= 0 && z <= k) {
                count++;
            }
        }
    }
    cout << count << endl;
    return 0;
}