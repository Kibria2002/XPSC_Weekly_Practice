#include <bits/stdc++.h>

using namespace std;

bool check(int mid, int arr[], int n, int c) {
    int cows = 1, lastPlacedCow = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] - lastPlacedCow >= mid) {
            if (++cows == c)
                return true;
            lastPlacedCow = arr[i];
        }
    }
    return false;
}

int solveProblem(int arr[], int n, int c) {
    sort(arr, arr + n);
    int start = 0, end = arr[n - 1] - arr[0], ans = 0;
    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (check(mid, arr, n, c)) {
            ans = mid;
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }
    return ans;
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n, c;
        cin >> n >> c;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        cout << solveProblem(arr, n, c) << endl;
    }
    return 0;
}