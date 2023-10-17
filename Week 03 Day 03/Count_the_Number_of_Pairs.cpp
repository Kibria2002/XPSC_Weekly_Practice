#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        const int N = 26;
        vector<int>big(N, 0), small(N, 0);
        for(auto &i : s){
            if('A' <= i && 'Z' >= i) big[i - 'A']++;
            else small[i - 'a']++;
        }
        int ans = 0;
        for(int i = 0; i < N; i++){
            int p = min(small[i], big[i]);
            ans += p;
            small[i] -=p; big[i] -= p;
            int add = min(k, max(small[i], big[i]) / 2);
            k -= add; ans += add;
        }
        cout << ans << endl;
    }
    return 0;
}