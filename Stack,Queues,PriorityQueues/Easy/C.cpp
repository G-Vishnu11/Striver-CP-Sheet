/*
    Problem Link : https://codeforces.com/contest/5/problem/C
    Submission Link : https://codeforces.com/contest/5/submission/146013816

*/

#include<bits/stdc++.h>
using namespace std;


void test() {
    int ans = 0;
    string str;
    cin >> str;
    stack<int> S;
    vector<int> v;
    S.push(-1);
    cin >> str;
    for(int i = 0; i < str.size(); i++) {
        if(str[i] == '(') S.push(i);
        else {
            S.pop();
            if(!S.empty()) ans = max(ans, i - S.top()), v.push_back(i - S.top());
            else S.push(i);
        }
    }
    int cnt = 0;
    for(auto i : v) {
        if(i == ans) cnt++;
    }
    if(ans <= 0) cout << "0 1" << endl;
    else cout << ans << " " << cnt << endl;
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