#include <bits/stdc++.h>

int main(){
    int t;
    std::cin >> t;
    while(t--){
        int m, n, l, r;
        std::cin >> n >> m >> l >> r;
        while ((r-l)!=m){
            if(r>0) r--;
            else l++;
        }
        std::cout << l << " " << r << std::endl;
    }
}