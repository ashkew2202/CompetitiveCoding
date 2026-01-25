#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> p(n);
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }

    // Find position of maximum element n
    int pos = 0;
    for (int i = 0; i < n; i++) {
        if (p[i] == n) {
            pos = i;
            break;
        }
    }

    // Extend r while sequence is decreasing
    int r = pos;
    while (r + 1 < n && p[r + 1] < p[r]) {
        r++;
    }

    // Reverse the segment
    reverse(p.begin() + pos, p.begin() + r + 1);

    // Output
    for (int x : p) {
        cout << x << " ";
    }
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
