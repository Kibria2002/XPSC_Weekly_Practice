#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) {
        long long ans = 0;
		priority_queue<int> q;
        int s;
		cin >> s;
		for(int i = 0;i < s; i++){
            int k;
			cin >> k;
			q.push(k);
			if(k == 0){
				ans += q.top();
				q.pop();
			}
		}
		cout << ans << endl;
    }
    return 0;
}