#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, q;
    cin >> n >> q;

    vector<long long> a(n), b(n), bestArr(n), pref(n + 1, 0);

    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];

    bestArr[n - 1] = max(a[n - 1], b[n - 1]);
    for (int i = n - 2; i >= 0; i--) {
        bestArr[i] = max({a[i], b[i], bestArr[i + 1]});
    }

    for (int i = 0; i < n; i++) {
        pref[i + 1] = pref[i] + bestArr[i];
    }

    while (q--) {
        int l, r;
        cin >> l >> r;
        l--; r--;
        cout << pref[r + 1] - pref[l] << " ";
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
