#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    string vow = "aeiou";
    while (t--) {
        int n;
        cin >> n;
        string s = "";
        int base = n / 5, extra = n % 5;
        for (int i = 0; i < 5; i++) {
            int cnt = base + (i < extra ? 1 : 0);
            s.append(cnt, vow[i]);
        }
        cout << s << "\n";
    }
}
