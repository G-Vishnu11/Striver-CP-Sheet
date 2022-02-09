/*
    Problem Link : https://codeforces.com/contest/371/problem/C
    Submission Link : https://codeforces.com/contest/371/submission/145469993
*/

#include<bits/stdc++.h>
using namespace std;

bool solve(int rb, int rs, int rc, long long n, int nb, int ns, int nc, int pb, int ps, int pc, long long r) {
    // long long ans = ((n * rb - nb) * pb + (n * rs - ns) * ps + (n * rc - nc) * pc);
    long long ans = 0;
    if(rb > 0) {
        if(n * rb > nb) ans += (n * rb - nb) * pb;
    }
    if(rs > 0) {
        if(n * rs > ns) ans += (n * rs - ns) * ps;
    }
    if(rc > 0) {
        if(n * rc > nc) ans += (n * rc - nc) * pc;
    }
    if(ans <= r) return true;
    return false;
}

void test() {
    string str;
    cin >> str;
    int nb, ns, nc;
    cin >> nb >> ns >> nc;
    int pb, ps, pc;
    cin >> pb >> ps >> pc;
    long long r;
    cin >> r;
    int rb = 0, rs = 0, rc = 0;
    int n = str.size();
    for(int i = 0; i < n; i++) {
        if(str[i] == 'B') rb++;
        else if(str[i] == 'S') rs++;
        else rc++;
    }
    long long low = 0, high = 1e15;
    long long ans = 0;
    while(low <= high) {
        long long mid = low + (high - low) / 2;
        if(solve(rb, rs, rc, mid, nb, ns, nc, pb, ps, pc, r)) {
            ans = mid;
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    cout << ans << endl;
}

int main() {
    int T = 1;
    // cin >> T;
    while(T--) {
        test();
    }
    return 0;
}