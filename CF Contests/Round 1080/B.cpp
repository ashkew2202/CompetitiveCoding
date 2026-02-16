#include <vector>
#include <iostream>
#include <set>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> arr(n+1);
    for(int i=1;i<=n;i++) cin >> arr[i];
    for(int i=1;i<=n;i+=2) {
        int pos=i;
        set<int> positions, values;
        while(pos<=n) {
            positions.insert(pos);
            values.insert(arr[pos]);
            pos*=2;
        }
        if (positions!=values) {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
    return;
}

int main() {
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}