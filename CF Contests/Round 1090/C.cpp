#include <bits/stdc++.h>
using namespace std;

void solve() {
    int p;
    cin >> p;
    int l=1, r=3*p;
    while(l<r) {
        cout << l << " " << r-1 << " " << r << " ";
        r-=2;
        l++;
    }
    cout << endl;
}
int main() {
    int t;
    cin >> t;
    while(t--) solve();
}