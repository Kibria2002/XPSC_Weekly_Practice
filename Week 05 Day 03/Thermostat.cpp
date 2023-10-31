#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) {
        int l, r, x, a, b;
		cin >> l >> r >> x >> a >> b;
		if(a == b) {
			cout << "0" << endl;
		}
		else if((b + x > r && b - x < l)||(a + x > r && a - x < l)) {
			cout << "-1" << endl;
		}
		else if(abs(b - a) >= x) {
			cout << "1" << endl;
		}
		else if((a + x <= r && b + x <= r)||(a - x >= l && b - x >= l)) {
			cout << "2" << endl;
		}
		else cout << "3" << endl;
    }
    return 0;
}