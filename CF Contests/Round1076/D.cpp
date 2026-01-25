#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, score=0;
    cin >> n;
    vector<int> a(n), b(n);
    for(int i=0;i<n;i++) cin >> a[i];
    sort(a.begin(), a.end());
    for(int i=0;i<n;i++) cin >> b[i];
    for(int i=0;i<n;i++) {
        int x=a[i], num = n-i;
        for(int j=0;j<n;j++) {
            if(num-b[j]<0) {
                score=max(score, x*j);
                break;
            }
            else if(num==0){
                break;
            }
            else{
                score = max(score, x*(j+1));
                num-=b[j];
            }
        }
    }
    cout << score << endl;
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