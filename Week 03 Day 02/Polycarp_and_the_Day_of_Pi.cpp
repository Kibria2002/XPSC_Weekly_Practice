#include <bits/stdc++.h>

using namespace std;

const string PI = "314159265358979323846264338327";

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        string n;
        cin >> n;
        int result = 0;
        for (int i = 0; i < n.length(); i++) {
            if (n[i] == PI[i]) {
                result++;
            }
            else {
                break;
            }
        }
        cout << result << endl;
    }
    return 0;
}
