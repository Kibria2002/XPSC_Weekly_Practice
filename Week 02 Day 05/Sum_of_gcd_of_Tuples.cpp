#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

int gcdThree(int a, int b, int c) {
    return gcd(gcd(a, b), c);
}

int sumGCD(int k) {
    int sum = 0;
    for (int a = 1; a <= k; a++) {
        for (int b = 1; b <= k; b++) {
            for (int c = 1; c <= k; c++) {
                sum += gcdThree(a, b, c);
            }
        }
    }
    return sum;
}

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int k;
    cin >> k;
    cout << sumGCD(k) << endl;
    return 0;
}