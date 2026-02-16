#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];
    auto isAdjacent = [](int a, int b) {
        return a != b && a + b != 7;
    };
    
    int ops = 0;
    for(int i = 1; i < n; i++) {
        if(!isAdjacent(arr[i-1], arr[i])) {
            ops++;
            for(int x = 1; x <= 6; x++) {
                if(!isAdjacent(arr[i-1], x)) continue;
                if(i < n-1 && !isAdjacent(x, arr[i+1])) continue;
                arr[i] = x;
                break;
            }
        }
    }
    cout << ops << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) solve();
}