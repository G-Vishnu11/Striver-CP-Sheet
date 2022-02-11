/*
    Problem Link : https://codeforces.com/contest/1602/problem/C
    Submission Link : https://codeforces.com/contest/1602/submission/145902606

*/

#include<bits/stdc++.h>
using namespace std;

bool solve(vector<int>& num, int k) {
    for(int i = 0; i < 32; i++) {
        if(num[i] % k != 0) return false;
    }
    return true;
}

void test() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    vector<int> num(32);
    for(int i = 0; i < n; i++) {
        int ind = 0;
        while(arr[i] != 0) {
            if(arr[i] % 2 == 1) num[ind]++;
            ind++;
            arr[i] >>= 1;
        }
    }
    vector<int> ans;
    for(int k = 1; k <= n; k++) {
        if(solve(num, k)) ans.push_back(k);
    }
    for(auto i : ans) {
        cout << i << " ";
    }
    cout << endl;
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