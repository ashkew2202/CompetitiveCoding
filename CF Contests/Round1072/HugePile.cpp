#include <bits/stdc++.h>
using namespace std;

unordered_map<int,int> dp; // memo by current n for this test case

int recursion(int n, int k) {
    auto it = dp.find(n);
    if(it != dp.end()) return it->second;

    if(n < k) {
        return dp[n] = -1;
    }
    if(n==k) {
        return dp[n] = 1;
    }
    if(n==0 || n==1) {
        return dp[n] = -1;
    }
    int recur1 = recursion(n/2, k), recur2 = recursion(n-n/2, k);
    if(recur1==-1 && recur2 == -1) return -1;
    if(recur1==-1) return recur2 + 1;
    if(recur2==-1) return recur1 + 1;
    return dp[n] = min(recur1, recur2) + 1;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {    
        int n, k;
        cin >> n >> k;
        dp.clear();
        int time = recursion(n, k);
        if(time!=-1) {
            time-=1;
        }
        cout << time << endl;
    }
}