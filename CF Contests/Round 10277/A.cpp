#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        char verdict='N';
        cin >> s;
        int s1 = stoi(s);
        if(s1==0) cout << 0<<" "<<0;
        int root = sqrt(s1);
        if (root * root == s1) {
            verdict = 'Y';
            cout << 1 << " "<<root-1<< endl;
        }
        if(verdict == 'N') cout << -1 << endl;
    }
}