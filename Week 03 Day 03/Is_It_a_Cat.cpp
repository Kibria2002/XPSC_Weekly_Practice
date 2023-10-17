#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) {
        int n; 
        cin >> n;
        string s; 
        cin >> s;
        for(int i = 0; i < s.size(); i++) {
        s[i] = tolower(s[i]);
        if(s[i - 1] == s[i]) {s.erase(i, 1); i--;}
        } 
        cout << (s == "meow" ? "YES" : "NO") << endl;
    }
    return 0;
}