#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int res = 0;
    for (int i = 0; i < n; i++) {
        res ^= arr[i];
    }
    cout << res << endl;
    return 0;
}