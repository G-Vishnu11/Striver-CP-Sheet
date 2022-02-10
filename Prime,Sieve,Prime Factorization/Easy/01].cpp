/*
    Problem Link : https://www.spoj.com/problems/PRIME1/cstart=10
    Submission Link : https://www.spoj.com/status/ns=29116951
*/

#include<bits/stdc++.h>
using namespace std;

bool mark[1000005] = {true, true};

vector<int> precompute() {
    vector<int> primes;
    for(int i = 2; i * i <= 1e6; i++) {
        if(mark[i] == false) {
            for(int j = i * i; j <= 1e6; j += i) {
                mark[j] = true;
            }
        }
    }
    for(int i = 2; i <= 1e6; i++) {
        if(mark[i] == false) primes.push_back(i);
    }
    return primes;
}

void test() {
    int n, m;
    cin >> n >> m;
    vector<int> ans;
    vector<int> primes = precompute();
    vector<bool> range(m - n + 1);
    if(n == 1) range[0] = true;
    for(int i = 0; i <= primes.size() && primes[i] * primes[i] <= m; i++) {
        long long j = max(primes[i] * primes[i], (n + primes[i] - 1) / primes[i] * primes[i]);
        for(; j <= m; j += primes[i]) {
            range[j - n] = true;
        }
    }
    for(int i = 0; i <= m - n; i++) {
        if(range[i] == false) {
            cout << i + n << endl;
        }
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