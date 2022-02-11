/*
    Problem Link : https://codeforces.com/contest/1594/problem/B
    Submission Link : https://codeforces.com/problemset/submission/1594/145900572

*/

#include<bits/stdc++.h>
using namespace std;

#define MOD 1000000007

long long expo(long long a, long long b) {
    long long ans = 1;
    while (b > 0) {
        if (b & 1) ans = (ans * a) % MOD; 
        a = (a * a) % MOD;
        b = b >> 1;
    } 
    return ans;
}

void test() {
    int n, k;
    cin >> n >> k;
    long long ans = 0;
    int p = 0;
    while(k != 0) {
        if(k & 1) ans += expo(n, p);
        ans %= MOD;
        p++;
        k >>= 1;
    }
    cout << ans << endl;
}

int main() {
    int T = 1;
    cin >> T;
    while(T--) {
        test();
    }
    return 0;
}
/* You are never a loser until you quit trying. */