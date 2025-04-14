#include <bits/stdc++.h>

int main(){
    int t;
    std::cin >> t;
    while(t--){
        std::string s,s1;
        std::getline(std::cin >> std::ws, s);
        s1.push_back(s[0]);
        for(int i=0;i<s.length();i++){
            if(s[i] == ' '){
                s1.push_back(s[i+1]);
            }
        } 
        std::cout << s1 << std::endl;
    }
}