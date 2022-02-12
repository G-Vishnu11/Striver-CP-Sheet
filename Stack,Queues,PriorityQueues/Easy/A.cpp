/*
    Problem Link : https://codeforces.com/contest/343/problem/B
    Submission Link : https://codeforces.com/contest/343/submission/146002844

*/

#include<bits/stdc++.h>
using namespace std;


void test() {
    string str;
    cin >> str;
    int n = str.size();
    stack<char> S;
    S.push(str[0]);
    for(int i = 1; i < n; i++) {
        if(S.size() > 0) {
            if(str[i] == S.top()) S.pop();
            else S.push(str[i]);
        }
        else {
            S.push(str[i]);
        }
    }
    if(S.empty()) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main() {
    int T = 1;
    // cin >> T;
    while(T--) {
        test();
    }
    return 0;
}
/* You are never a loser until you quit trying. */