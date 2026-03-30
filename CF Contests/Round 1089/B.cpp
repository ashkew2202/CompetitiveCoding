#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int p[n];
    for(int i=0;i<n;i++) {
        cin >> p[i];
    }
    int count=0, marked=-1;
    for(int i=0;i<n;i++) {
        if(marked-1==i) {
            break;
        }
        if(p[i] <= i+1) count++;
        else {
            if(marked > p[i]) count++;
        }
    }
    cout << count << endl;
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