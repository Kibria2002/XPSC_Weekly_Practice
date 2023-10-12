#include <bits/stdc++.h>

using namespace std;

int distance(string s1, string s2) {
    int diff = 0;
    for(int i = 0; i < s1.length(); i++) {
        diff += abs(s1[i] - s2[i]);
    }
    return diff;
}

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;
        vector<string> words(n);
        for(int i = 0; i < n; i++) {
            cin >> words[i];
        }
        int min_diff = INT_MAX;
        for(int i = 0; i < n; i++) {
            for(int j = i+1; j < n; j++) {
                min_diff = min(min_diff, distance(words[i], words[j]));
            }
        }
        cout << min_diff << endl;
    }
    return 0;
}