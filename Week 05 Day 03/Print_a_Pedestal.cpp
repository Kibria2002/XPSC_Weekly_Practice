#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		
		int f,s,x;
		if (n % 3 == 0) {
			f = n / 3 + 1;
			s = n / 3;
			x = n / 3 - 1;

		} else if (n % 3 == 1) {
			f = n / 3 + 2;
			s = n / 3;
			x = n / 3 - 1;

		} else if (n % 3 == 2) {
			f = n / 3 + 2;
			s = n / 3 + 1;
			x = n / 3 - 1;
		}

		cout << s << ' ' << f << ' ' << x << endl;
		
	}
    return 0;
}