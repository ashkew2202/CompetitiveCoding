#include <bits/stdc++.h>

int main(){
    int t;
    std::cin >> t;
    while(t--){
        int n, max=0, sum=0;
        std::cin >> n;
        std::vector<int> a(n);
        for(int i=0;i<n;i++){
            std::cin >> a[i];
            if(max < a[i]) max=a[i];
        }
        for(int i=0;i<n;i++){
            sum+=max^a[i];
        }
        std::cout << sum << std::endl;
    }
}