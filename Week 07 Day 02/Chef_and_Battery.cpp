#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int result = 0;
        while (n != 50) {
            if (n > 50) {
                n -= 3;
                result++;
            }
            else {
                n += 2;
                result++;
            }
        }
        cout << result << endl;
    }
    return 0;
}