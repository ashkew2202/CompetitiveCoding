#include <bits/stdc++.h>

int main(){
    int t;
    std::cin >> t;
    while(t--){
        std::string s,s1;
        std::cin >> s;
        if(s.length()<=10){
            std::cout << s<< std::endl;
            continue;
        }
        s1.push_back(s[0]);
        int len=s.length()-2;
        s1 += std::to_string(s.length() - 2);
        s1.push_back(s[s.length() - 1]);
        std::cout << s1 << std::endl;
    }
}