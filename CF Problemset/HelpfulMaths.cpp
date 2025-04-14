#include <iostream>
#include <vector>
#include <algorithm>
int main(){
    std::string s,s1;
    std::vector<int> a;
    std::cin >> s;
    for(int i=0;i<s.length();i++){
        if(s[i]=='+') continue;
        a.push_back(s[i]);
    }
    std::sort(a.begin(), a.end());
    for(int i=0;i<a.size();i++){
        s1.push_back(a[i]);
        if(i==a.size()-1) continue;
        else s1.push_back('+');
    }
    std::cout << s1;
    return 0;
}