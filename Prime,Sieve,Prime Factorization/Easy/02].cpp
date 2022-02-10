/*
    Problem Link : https://www.spoj.com/problems/TDPRIMES/
    Submission Link : https://www.spoj.com/status/ns=29116976
*/

#include<bits/stdc++.h>
using namespace std;

const int N = 1e8 + 5;

bool mark[N] = {true, true};

void test() {
    for(int i = 2; i * i <= N; i++) {
        if(mark[i] == false) {
            for(int j = i * i; j <= N; j += i) {
                mark[j] = true;
            }
        }
    }
    int cnt = 0;
    for(int i = 2; i <= N; i++) {
        if(mark[i] == false) cnt++;
        if(cnt % 100 == 1 && mark[i] == false) cout << i << endl;
    }
}

int main() {
    int T = 1;
    // cin >> T;
    while(T--) {
        test();
    }
    return 0;
}