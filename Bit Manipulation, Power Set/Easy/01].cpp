/*
    Problem Link : https://codeforces.com/problemset/problem/912/B
    Submission Link : https://codeforces.com/contest/912/submission/145899903

*/

#include<bits/stdc++.h>
using namespace std;

void test() {
    long long n, k;
    cin >> n >> k;
    long long ans = 1;
    while(ans <= n) {
        ans = ans << 1;
    }
    if(k == 1) cout << n << endl;
    else cout << ans - 1 << endl;
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