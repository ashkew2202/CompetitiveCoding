#include <bits/stdc++.h>
using namespace std;

bool is_even(int num1, int num2){
    return (num2%num1)%2==0;
}
int main(){
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        int done=0;
        for(int i=0;i<n;i++) {
            cin >> a[i];
        }
        for(int i=0;i<n-1;i++) {
            for(int j=i+1;j<n;j++) {
                if(is_even(a[i],a[j])){
                    cout << a[i] << " " << a[j]<< endl;
                    done =1;
                    break;
                }
            }
            if(done) {
                break;
            }
        }
        if(done==0){
            cout << -1 << endl;
        }
    }
}