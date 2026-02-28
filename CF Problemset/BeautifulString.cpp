#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while(t--) {
        int n;
        string s;
        cin >> n >> s;
        
        vector<int> toRemove;
        
        // Check pairs from outside to inside
        int left = 0, right = n - 1;
        
        while(left < right) {
            if(s[left] == s[right]) {
                // Already matching, move inward
                left++;
                right--;
            }
            else if(s[left] == '0' && s[right] == '1') {
                // Remove left (which is '0')
                toRemove.push_back(left);
                left++;
            }
            else if(s[left] == '1' && s[right] == '0') {
                // Remove right (which is '0')
                toRemove.push_back(right);
                right--;
            }
        }
        
        // Sort the indices (to ensure non-decreasing order)
        sort(toRemove.begin(), toRemove.end());
        
        // Verify the subsequence is non-decreasing
        bool valid = true;
        for(int i = 0; i < toRemove.size(); i++) {
            if(i > 0 && s[toRemove[i]] < s[toRemove[i-1]]) {
                valid = false;
                break;
            }
        }
        
        if(valid) {
            cout << toRemove.size() << "\n";
            for(int i = 0; i < toRemove.size(); i++) {
                if(i > 0) cout << " ";
                cout << toRemove[i] + 1; // 1-indexed
            }
            if(toRemove.size() > 0) cout << "\n";
            else cout << "\n";
        }
        else {
            cout << "-1\n";
        }
    }
    
    return 0;
}