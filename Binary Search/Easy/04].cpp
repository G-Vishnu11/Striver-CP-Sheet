/*
    Problem Link : https://codeforces.com/problemset/problem/1613/C
    Submission Link : https://codeforces.com/problemset/submission/1613/145541947
*/

#include<bits/stdc++.h>
using namespace std;

bool solve(vector<long long>& arr, long long n, long long h, long long num) {
    long long ans = num;
    for(int i = 0; i < n - 1; i++) {
        ans += min(num, (arr[i + 1] - arr[i]));
    }
    if(ans >= h) return true;
    return false;
}

void test() {
    long long n, h;
    cin >> n >> h;
    vector<long long> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    long long ans = 0;
    long long low = 0, high = 1e18;
    while(low <= high) {
        long long mid = low + (high - low) / 2;
        if(solve(arr, n, h, mid)) {
            ans = mid;
            high = mid - 1;
        }
        else low = mid + 1;
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