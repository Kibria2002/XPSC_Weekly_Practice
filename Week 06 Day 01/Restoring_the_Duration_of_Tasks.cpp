#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int s[n], f[n + 1] = {0};
		for (int j = 0; j < n; j++) {
			cin >> s[j];
		}
		for (int j = 1; j <= n; j++) {
			cin >> f[j];
			cout << f[j] - max(f[j - 1], s[j - 1]) << " ";
		}
		cout << endl;
	}
    return 0;
}