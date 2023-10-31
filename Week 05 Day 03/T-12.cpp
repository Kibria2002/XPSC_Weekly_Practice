#include <bits/stdc++.h>

using namespace std;

double dis(int x1, int y1, int x2, int y2) {
    return (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);
}

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int px, py, ax, ay, bx, by;
        cin >> px >> py >> ax >> ay >> bx >> by;
        double mx1 = max(dis(ax, ay, 0, 0), dis(ax, ay, px, py));
        double mx2 = max(dis(0, 0, bx, by), dis(px, py, bx, by));
        double mx3 = max(dis(ax, ay, bx, by) / 4.0, max(min(dis(ax, ay, 0, 0), dis(0, 0, bx, by)), min(dis(ax, ay, px, py), dis(px, py, bx, by))));
        cout << fixed << setprecision(10) << sqrt(min(mx1, min(mx2, mx3))) << endl;
    }
    return 0;
}