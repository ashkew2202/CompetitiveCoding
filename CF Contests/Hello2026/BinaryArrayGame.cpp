#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int n;
        cin >> n;
        int a[n];
        int count =0;
        for(int i=0;i<n;i++) {
            cin >> a[i];
            if(a[i]==0) count++;
        }
        if(count==0 || count%2==1) {
            cout << "Alice\n";
        }
        else {
            cout << "Bob\n";
        }
    }
}