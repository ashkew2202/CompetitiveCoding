#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, s, x, sum=0;
    cin >> n >> s >> x;
    vector<int> arr(n);
    for(int i=0;i<n;i++) {
        cin >> arr[i];
        sum+=arr[i];
    }
    if(sum==s) {
        cout << "YES" << endl;
        return;
    }
    if((s-sum)>0 && (s-sum)%x==0) {
        cout << "YES" << endl;
        return;
    }
    else {
        cout << "NO" << endl;
        return;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}