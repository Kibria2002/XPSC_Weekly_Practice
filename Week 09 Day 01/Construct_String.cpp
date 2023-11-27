#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string str;
        cin >> str;
        vector<char> st;
        int i = 0;
        while (i < n) {
            int j = i + 1;
            while (j < n && str[j] == str[i]) {
                j++;
            }
            if ((j - i) % 2 == 0) {
                st.push_back(str[i]);
                st.push_back(str[i]);
            }
            else {
                st.push_back(str[i]);
            }
            i = j;
        }
        for (int i = 0; i < st.size(); i++) {
            cout << st[i];
        }
        cout << endl;
    }
    return 0;
}