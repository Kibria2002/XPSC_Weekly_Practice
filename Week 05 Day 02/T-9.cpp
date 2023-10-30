#include<bits/stdc++.h>
using namespace std;

bool check(int mid, int n, int m, int tree[]){
    long long sum = 0;
    for(int i = 0; i < n; i++){
        if(tree[i] > mid){
            sum += tree[i] - mid;
        }
    }
    return sum >= m;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    int tree[n];
    for(int i = 0; i < n; i++){
        cin >> tree[i];
    }

    int low = 0, high = 1e9;
    while(high - low > 1){
        int mid = (low + high) / 2;
        if(check(mid, n, m, tree)){
            low = mid;
        } else {
            high = mid;
        }
    }

    cout << low << "\n";
    return 0;
}
