#include <algorithm>
#include <iostream>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int arr[n];
    bool hasOne=false,has67=false;
    for(int i=0; i<n;i++) {
        cin >> arr[i];
        if(arr[i]==1) hasOne=true;
        if(arr[i]==67) has67=true;
    }
    if(has67) cout << "YES" << endl;
    else cout << "NO" << endl;
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}