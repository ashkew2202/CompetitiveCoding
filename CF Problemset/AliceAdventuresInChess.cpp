#include <bits/stdc++.h>
using namespace std;

bool solve(int n, int a, int b, string s) {
        int u_d = 0, r_l = 0;
        u_d = 0; r_l = 0;
        vector<pair<int,int>> seen; 
        for(int i = 0; i < n; i++) {
            if(s[i]=='N') u_d++;
            if(s[i]=='S') u_d--;
            if(s[i]=='E') r_l++;
            if(s[i]=='W') r_l--;
            seen.push_back({r_l,  u_d});
        }
        for(auto [x,y] : seen ){
            if ( u_d == 0 && r_l == 0 ) {
                if(x == a && y == b) return true;
            } else if (r_l == 0) {
                if (u_d != 0 && x == a && (b - y) % u_d == 0 && (b - y) / u_d >= 0) return true;
            } else if (u_d == 0) {
                if (r_l != 0 && y == b  && (a - x) % r_l == 0 && (a - x) / r_l >= 0) return true;
            } else {
                if (r_l != 0 && u_d != 0 && (a - x) % r_l == 0 && (b - y) % u_d == 0) {
                    int k1 = (a - x) / r_l;
                    int k2 = (b - y) / u_d;
                    if (k1 == k2 && k1 >= 0) return true;
                }
            }
        }
        
        return false;
    }
int main() {
    int t;
    cin >> t;
    while(t--){
        int n, a, b;        
        cin >> n >> a >> b;
        string s;
        cin >> s;
        if (solve(n, a, b, s)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}