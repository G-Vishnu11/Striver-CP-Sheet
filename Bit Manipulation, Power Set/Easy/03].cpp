/*
    Problem Link : https://codeforces.com/problemset/problem/1097/B
    Submission Link : https://codeforces.com/contest/1097/submission/145901715

*/

#include<bits/stdc++.h>
using namespace std;

bool solve(vector<int>& arr, int n, int i, int sum) {
    if(i == n) return sum == 0 || sum % 360 == 0;
    return solve(arr, n, i + 1, sum + arr[i]) || solve(arr, n, i + 1, sum - arr[i]);
}

void test() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    if(solve(arr, n, 0, 0)) cout << "YES" << endl;
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