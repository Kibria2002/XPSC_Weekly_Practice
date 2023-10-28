#include<bits/stdc++.h>
using namespace std;

bool check(int mid, int m, vector<int>& vessels) {
    int containers = 1;
    int sum = 0;
    for(int i = 0; i < vessels.size(); i++) {
        if(vessels[i] > mid) return false;
        if(sum + vessels[i] > mid) {
            containers++;
            sum = vessels[i];
            if(containers > m) return false;
        } else {
            sum += vessels[i];
        }
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    while(cin >> n >> m) {
        vector<int> vessels(n);
        int sum = 0;
        for(int i = 0; i < n; i++) {
            cin >> vessels[i];
            sum += vessels[i];
        }

        int left = 0, right = sum;
        int ans = right;
        while(left <= right) {
            int mid = left + (right - left) / 2;
            if(check(mid, m, vessels)) {
                ans = mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }

        cout << ans << "\n";
    }

    return 0;
}
