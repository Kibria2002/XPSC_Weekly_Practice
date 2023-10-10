#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        vector<vector<char>> b(n);
        for(int i = 0; i < n; i++) {
            int bi;
            cin >> bi;
            b[i].resize(bi);
            for(int j = 0; j < bi; j++) cin >> b[i][j];
        }
        vector<int> ans(n);
        for(int i = 0; i < n; i++) {
            int cur = a[i];
            for(int j = b[i].size() - 1; j >= 0; j--) {
                if(b[i][j] == 'U') {
                    if(cur == 0) cur = 9;
                    else cur--;
                } else {
                    if(cur == 9) cur = 0;
                    else cur++;
                }
            }
            ans[i] = cur;
        }
        for(int i=0; i<n; i++) cout << ans[i] << " ";
        cout << endl;
    }
    return 0;
}