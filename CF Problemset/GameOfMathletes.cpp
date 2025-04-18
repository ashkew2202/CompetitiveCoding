#include <bits/stdc++.h>

int main(){
    int t;
    std::cin>>t;
    while(t--){
        int n,k,score=0;
        std::cin>>n>>k;
        std::vector<int> x(n);
        for(int i=0;i<n;i++){
            std::cin>>x[i];
        }
        std::sort(x.begin(), x.end());
        int left=0,right=x.size()-1;
        while(left<right){
            if((x[left]+x[right])==k){
                score++; right--; left++;
            }
            else if((x[left]+x[right])<k) left++;
            else right--;
        }
        std::cout<<score<<std::endl;
    }
}