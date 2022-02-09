/*
    Problem Link : https://codeforces.com/contest/670/problem/D1
    Submission Link : https://codeforces.com/contest/670/submission/145518610
*/

#include<bits/stdc++.h>
using namespace std;

bool solve(vector<long long>& A, vector<long long>& B, long long k, long long num) {
    int n = A.size();
    unsigned long long ans = 0;
    for(int i = 0; i < n; i++) {
        if((num * A[i]) > B[i]) ans += (num * A[i]) - B[i];
    }
    if(ans <= k) return true;
    return false;
}

void test() {
    long long n, k;
    cin >> n >> k;
    vector<long long> A(n), B(n);
    for(int i = 0; i < n; i++) {
        cin >> A[i];
    }
    for(int i = 0; i < n; i++) {
        cin >> B[i];
    }
    long long ans = 0;
    long long low = 0, high = 1e10;
    while(low <= high) {
        long long mid = low + (high - low) / 2;
        if(solve(A, B, k, mid)) {
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