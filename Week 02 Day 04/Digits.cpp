#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    int count = 0;
    while (n > 0) {
        n /= k;
        count++;
    }
    cout << count << endl;
    return 0;
}