#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++) {
        cin >> a[i];
    }
    if(n==1) {
        cout << a[0] << endl;
        return;
    }
    sort(a.begin(), a.end(), greater<int>());
    for(int i=0;i<n-1;i++) {
        if(a[i]==a[i+1]) {
            cout << -1 << endl;
            return;
        }
    }
    for(int i: a) {
        cout << i << " ";
    }
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}