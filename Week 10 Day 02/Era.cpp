#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t;
	cin >> t; 
	while(t--) {
		int n;
		cin >> n;
		int k, op = 0;
		for(int i = 1; i <= n; i++) {
			cin >> k;
			if((k- i) > op) op = k - i;
		}
		cout << op << endl;
		
	}
    return 0;
}