/*
    Problem Link : https://codeforces.com/contest/158/problem/C
    Submission Link : https://codeforces.com/contest/158/submission/146004826

*/

#include<bits/stdc++.h>
using namespace std;


void test() {
    int n;
    cin >> n;
    vector<string> directories;
    for(int i = 0; i < n; i++) {
        string cmd;
        cin >> cmd;
        if(cmd == "pwd") {
            cout << '/';
            for(string directory : directories)
                cout << directory << '/';
            cout << '\n';
        }
        else {
            string directory;
            cin >> directory;
            if(directory[0] == '/')
                directories.clear();
            directory += '/';
            int pos = 0;
            while((pos = directory.find("/")) != string::npos) {
                string token = directory.substr(0, pos);
                if(token == "..")
                    directories.pop_back();
                else if(pos != 0)
                    directories.push_back(token);
                directory.erase(0, pos+1);
            }
        }
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
/* You are never a loser until you quit trying. */