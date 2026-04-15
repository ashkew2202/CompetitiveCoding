#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, m;
    cin >> n >> m;
    vector<long long> a(n);
    int count=1, mx=INT_MIN;
    for(long long i=0;i<n;i++) cin >> a[i]; 
    for(long long i=0;i<n-1;i++) {
        if(a[i]==a[i+1]) {
            count++;
        }
        else {
            mx = max(count, mx);
            count=1;
        }
    } 
    mx = max(count, mx);
    if(mx < m) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}