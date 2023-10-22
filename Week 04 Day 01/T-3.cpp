#include <bits/stdc++.h>

using namespace std;

int countBits(int a, int b) {
  int c = a ^ b;
  int count = 0;
  while (c > 0) {
    count += c & 1;
    c >>= 1;
  }
  return count;
}

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n, m, k;
    cin >> n >> m >> k;
    int x[m + 1];
    for (int i = 0; i <= m; i++) {
        cin >> x[i];
    }
    int f = x[m];
    int fs = 0;
    for (int i = 0; i < m; i++) {
        if (countBits(f, x[i]) <= k) {
        fs++;
        }
    }
    cout << fs << endl;
    return 0;
}