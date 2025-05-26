#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k, count=0;
        cin >> n>>k;
        string s;
        cin >>s;
        int left =0,right=n-1;
        while(left<=right){
            if(s[left]==s[right]) count++;
            left++; right--;
        }
        cout << count << endl;
        if(count==k) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}