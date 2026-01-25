#include <bits/stdc++.h>
using namespace std;

void coutKro(vector<int> p) {
    for(int i=0; i<p.size(); i++) {
        cout << p[i] << " ";
    }
    cout << endl;
    return;
}
void solve() {
    int n;
    cin >> n;
    vector<int> p(n);
    int l=0, r=n-1;
    int pos=0;
    for(int i=0;i<n;i++) {
        cin >> p[i];
        if(p[i]==n) pos=i;
    }
    if(pos==0) {
        while(p[pos]==n) {
            pos++; n--;
        }
        while(pos<=r && p[r]!=n) {
            r--;
        }
        reverse(p.begin()+pos, p.begin()+r+1);
    }
    else {
        reverse(p.begin(), p.begin()+pos+1);
    }
    for(int i=0; i<p.size(); i++) {
        cout << p[i] << " ";
    }
    cout << endl;
    return;
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