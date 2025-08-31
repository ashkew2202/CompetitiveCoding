#include <bits/stdc++.h>
using namespace std;
int main() {
    string logs;
    cin >> logs;
    int pl=0, pr=0;
    bool leftserving=true;
    int lsets=0, rsets=0;
    for(int i =0; i<logs.length(); i++) {

        if(logs[i] == 'S') {
            if(leftserving) pl++;
            else {
                pr++;
                leftserving=false;
            }
        }

        if(logs[i]=='R') {
            if(!leftserving) {
                pl++;
                leftserving=true;
            }
            else {
                pr++;
                leftserving=false;
            }
        }

        if((pl>=5 && pl-pr>=2) || pl==10) {
            lsets++; pl=0; pr=0;
        } else if((pr>=5 && pr-pl>=2) || pr==10) {
            rsets++; pl=0; pr=0;
        }

        if(logs[i] == 'Q') {
            if(lsets==2) {
                cout << lsets << " (winner) - " << rsets;
            }else if(rsets==2) {
                cout << lsets << " - " << rsets << " (winner)"<<endl;
            }
            else {
                if(leftserving) {
                    cout << lsets << " ("<<pl<<"*) - "<< rsets << " (" << pr << ")"<<endl; 
                }
                else {
                    cout << lsets << " ("<<pl<<") - "<< rsets << " (" << pr << "*)"<<endl; 
                }
            }

        }
        
        }
    }
