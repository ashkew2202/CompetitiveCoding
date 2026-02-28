#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        int n, civ1=0, civ2=0;
        bool diff=true, printed=false;
        cin >> n;
        if(n==3) {
            cout << 3 << endl;
            continue;
        }
        if(n==2) {
            cout << 2 << endl;
            continue;
        }
        if(n%2==0 || n%3==0) {
            cout << 0 << endl;
            continue;
        }
        while(n-5>=0) {
            if(diff){
                civ1+=3;
                civ2+=2;
                diff=!diff;
            }
            else {
                civ1+=2;
                civ2+=3;
                diff=!diff;
            }
            n-=5;
            if(n==2) {
                cout << ((civ1>civ2) ? civ2+2: civ1+2) << '\n';
                printed=true;
                break;
            }
            if(n==3) {
                cout << ((civ1>civ2) ? civ2+3: civ1+3) << '\n';
                printed = true;
                break;
            }
        }
        if(!printed) cout << (civ1>civ2 ? civ1-civ2 : civ2-civ1) << '\n';
    }
}