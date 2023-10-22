#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin>>a[i];
    int flag = 0;
    for(int m = 0; m < (1 << n); m++){
        int sum = 0;
        for(int k = 0; k < n; k++) {
            if(m& (1 << k)) sum += a[k];
            else sum -= a[k];
        }
        if(sum % 360 == 0) {
            cout << "YES" << endl;
            flag = 1;
            break;
            }
    }
    if(flag == 0) cout << "NO" <<endl;
    return 0;
}