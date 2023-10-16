#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t; 
    cin >> t;
	while (t--) {
        int n, s1, s2;
		cin >> n >> s1 >> s2;
		vector<int> v;
		int d = s1 - s2;
		for (; s2 >= d; s2 -= d)
			v.push_back(d);
		if (s2) v.push_back(s2);
		for (int i = 0; i < v.size() && v.size() + 1 < n;) {
			if (v[i] == 1) {
				++i;
				continue;
			}
			--v[i];
			v.push_back(1);
		}
		v.push_back(d);
        sort(v.begin(), v.end());
        for (int x: v)
            cout << x << ' ';
        cout << endl;
        v.clear();
	}
    return 0;
}
