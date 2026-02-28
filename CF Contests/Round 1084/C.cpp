#include <bits/stdc++.h>
using namespace std;

bool allStars(const string &str) {
    for (char ch : str) {
        if (ch != '*') return false;
    }
    return true;
}
void solve() {
    int n;
    cin >> n;
    string str;
    cin >> str;
    if(n==1){
        cout << "NO" << endl;
        return;
    }
    bool changed=true;
    while(!allStars(str) && changed) {
        changed=false;
        for(int i=0;i<n-1;i++) {
            if(str[i]=='*') continue;
            for(int j=i+1;j<n;j++) {
                if(str[j]=='*') continue;
                if(str[i]==str[j]){
                    bool bet = true;
                    for(int k=i+1;k<=j-1;k++) {
                        if(str[k]!='*') {
                            bet = false;
                            break;
                        }
                    }
                    if(bet) {
                        str[i]='*';
                        str[j]='*';
                        changed=true;
                        break;
                    }
                }
            }
        }
    }
    if(allStars(str)) cout << "YES\n";
    else cout << "NO\n"; 

}

int main() {
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) solve();
}