#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, num;
    cin >> n;
    int maxNum = INT_MIN;
    for(int i=0;i<n;i++) {
        cin >> num;
        maxNum = max(maxNum, num);
    }
    cout << maxNum*n << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}