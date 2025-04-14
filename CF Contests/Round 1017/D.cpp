#include <bits/stdc++.h>

int main(){
    int t;
    std::cin >> t;
    while(t--){
        std::string p, s, verdict="YES";
        std::cin >> p >> s;
        int p1 = 0, p2 = 0;
        while(p1!=p.length()&&p2!=s.length()){
            if((p[p1]==s[p2])&&(p[p1]==s[p2+1])){
                p2=p2+2;
                p1++;
            }
            else if(p[p1]==s[p2]){
                p1++;
                p2++;
            }
            else{
                verdict = "NO";
                break;
            }
        }
        if(p2!=s.length()) verdict="NO";
        if(p1!=p.length()) verdict="NO";
        std::cout << verdict << std::endl;
    }
}