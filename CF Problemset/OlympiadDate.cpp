#include <bits/stdc++.h>
#include <unordered_map>

int main(){
    int t;
    std::cin >> t;
    while(t--){
        int n, count=0;
        std::cin >> n;
        std::vector<int> a(n);
        for(int i = 0; i < n; i++) {
            std::cin >> a[i];
        }
        std::unordered_map<int, int> freq = {{0, 0}, {1, 0}, {2, 0}, {3, 0}, {5, 0}};
        for(int i=0;i<n;i++){
            freq[a[i]]++;
            if((freq[0] == 3) && 
               (freq[1] == 1) && 
               (freq[2] == 2) && 
               (freq[3] == 1) && 
               (freq[5] == 1)) {
                count = i + 1;
                std::cout << count << std::endl;
                break;
            }
            
        }
        std::cout << count << std::endl;
}
}