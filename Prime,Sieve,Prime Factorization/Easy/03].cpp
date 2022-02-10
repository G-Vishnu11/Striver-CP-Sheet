/*
    Problem Link : https://www.spoj.com/problems/TDKPRIME/
    Submission Link : https://www.spoj.com/status/ns=29117023
*/

#include<bits/stdc++.h>
using namespace std;

const int N = 9e7; // 86028121 is 5000000th prime number.

int main() {
    bool prime[N] = {false};
    for(int i = 2; i * i < N; i++) {
        if(prime[i] == false) {
            for(int j = i * i; j < N; j += i) {
                prime[j] = true;
            }
        }
    }
    vector<int> primes;
    for(int i = 2; i < N; i++) {
        if(prime[i] == false) primes.push_back(i);
    }
    int T;
    cin >> T;
    while(T--) {
        int n;
        cin >> n;
        cout << primes[n - 1] << "\n";
    }
    return 0;
}