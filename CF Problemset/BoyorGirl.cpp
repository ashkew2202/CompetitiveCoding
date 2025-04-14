#include <bits/stdc++.h>

int main(){
    std::string s;
    std::unordered_map<char, int> freq;
    std::cin >> s;
    for(int i=0;i<s.length();i++){
        freq[s[i]]++;
    }
    if(freq.size()%2==0) std::cout << "CHAT WITH HER!";
    else std::cout << "IGNORE HIM!";
    return 0;
}