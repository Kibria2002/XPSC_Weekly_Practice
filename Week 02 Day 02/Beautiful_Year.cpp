#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int a; cin >> a;
    while (true) {
        a++;
        string y = to_string(a);
        set<char> d;

        bool h = true;

        for (char digit : y) {
            if (d.count(digit) > 0) {
                h = false;
                break;
            }
            d.insert(digit);
        }

        if (h) {
            cout << a << endl;
            break;
        }
    }
    return 0;
}