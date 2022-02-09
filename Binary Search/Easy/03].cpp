/*
    Problem Link : https://codeforces.com/contest/287/problem/B
    Submission Link : https://codeforces.com/contest/287/submission/145753686
*/

#include<bits/stdc++.h>
using namespace std;

bool solve(long long n, long long k, long long m) {
    long long ans = (k + k - m + 1) * m / 2;
    if(ans < n) return true;
    return false;
}

void test() {
    long long n, k;
    cin >> n >> k;
    n--;
    k--;
    if(n == 0) {
        cout << 0 << endl;
        return;
    }
    if(n > (k * (k + 1) / 2)) {
        cout << -1 << endl;
        return;
    }
    long long low = 1, high = k;
    while(low < high) {
        long long mid = (low + high) / 2;
        if(solve(n, k, mid)) low = mid + 1;
        else high = mid;
    }
    cout << low << endl;
}

int main() {
    int T = 1;
    // cin >> T;
    while(T--) {
        test();
    }
    return 0;
}