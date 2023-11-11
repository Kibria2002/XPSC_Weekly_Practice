#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t;
	cin>>t;
	while (t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for (int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    bool flag=1;
	    for (int i=0;i<n-2;i++){
	       for (int j=i+1;j<n-1;j++){
	           for (int k=j+1;k<n;k++){
	               if (arr[j]-arr[i]== arr[k]-arr[j]){
	                   cout<<"NO\n";
	                   flag=0;
	                   break;
	               }
	           }
	           if (!flag) break;
	       }
	       if (!flag) break;
	    }
	    if (flag==1) cout<<"YES"<<endl;
	}
    return 0;
}