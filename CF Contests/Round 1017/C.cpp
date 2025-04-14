#include <bits/stdc++.h>

int main(){
    int t;
    std::cin >> t;
    while(t--){
        int n;
        std::cin >> n;
        std::vector<std::vector<int>> a(n, std::vector<int>(n));
        std::vector<int> perm;
        std::unordered_map<int,int> idx;
        std::unordered_set<int> v;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
            std::cin >> a[i][j];
            idx[i+j+1]=a[i][j];
            v.insert(a[i][j]);
            }
        }
        int missing_val;
        for(int i=1; i<=2*n; i++){
            if(v.find(i) == v.end()){
                perm.push_back(i);
            }
        }
        for(int i=1;i<2*n;i++){
            perm.push_back(idx[i]);
            std::cout << perm[i-1] << " ";
        }
        std::cout << perm[2*n-1] <<std::endl;
    }
}