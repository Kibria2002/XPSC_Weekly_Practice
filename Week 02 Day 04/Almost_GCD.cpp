#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    vector<int> cnt(1001, 0);
    for(int i = 0; i < n; i++) {
        for(int j = 2; j <= a[i]; j++) {
            if(a[i] % j == 0) cnt[j]++;
        }
    }
    int maxGCD = 2;
    for(int i = 3; i <= 1000; i++) {
        if(cnt[i] >= cnt[maxGCD]) maxGCD = i;
    }
    cout << maxGCD << endl;
    return 0;
}