#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int n;
    cin >> n;
    vector<int> a(n);
    long long sum = 0;
    int minOdd = INT_MAX;
    for(int i=0; i<n; i++) {
        cin >> a[i];
        sum += a[i];
        if(a[i] % 2 != 0)
            minOdd = min(minOdd, a[i]);
    }
    if(sum % 2 != 0)
        sum -= minOdd;
    cout << sum << endl;
    return 0;
}