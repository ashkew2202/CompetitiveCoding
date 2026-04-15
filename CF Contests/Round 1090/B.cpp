#include <bits/stdc++.h>
using namespace std;

void solve() {
    int maxNum=INT_MIN, sum=0, arr[7];
    for(int i=0;i<7;i++) {
        cin >> arr[i];
        sum+=arr[i];
        maxNum = max(maxNum, arr[i]);
    }
    cout << maxNum*2-sum << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) solve();
}