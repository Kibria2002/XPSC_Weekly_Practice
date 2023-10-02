#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<int> freq(26, 0);
        for(int i = 0; i < n; i++) {
            freq[s[i] - 'A']++;
        }
        int balloons = 0;
        for(int i = 0; i < 26; i++) {
            if(freq[i] > 0) {
                balloons += freq[i] + 1;
            }
        }
        cout << balloons << endl;
    }
    return 0;
}