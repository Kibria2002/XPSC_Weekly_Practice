#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> heights(n);
    for(int i = 0; i < n; i++) {
        cin >> heights[i];
    }
    int q;
    cin >> q;
    while(q--) {
        int height;
        cin >> height;
        vector<int>::iterator lower, upper;
        lower = lower_bound(heights.begin(), heights.end(), height);
        upper = upper_bound(heights.begin(), heights.end(), height);
        if(lower == heights.begin()) cout << "X ";
        else cout << *(--lower) << " ";
        if(upper == heights.end()) cout << "X" << endl;
        else cout << *upper << endl;
    }
    return 0;
}