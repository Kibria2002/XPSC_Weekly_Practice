#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> a(n);
        for(int i=0; i<n; i++) cin >> a[i];
        int min_candies = *min_element(a.begin(), a.end());
        long long total_candies = 0;
        for(int i=0; i<n; i++) {
            total_candies += a[i];
        }
        cout << total_candies - n * min_candies << "\n";
    }
    return 0;
}