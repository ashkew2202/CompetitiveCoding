#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        int s, k, m;
        cin >> s >> k >> m;

        if (k == 0) {
            cout << max(0, s - m) << "\n";
            continue;
        }

        int flips = m / k, extra = m % k;

        int remaining;
        if (s < k) {
            remaining = max(0, s - extra);
        } else {
            if (flips % 2 == 0) {
                remaining = s - extra;
            } else {
                remaining = k - extra;
            }
        }

        cout << max(0, remaining) << "\n";
    }
}