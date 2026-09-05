#include <bits/stdc++.h>
using namespace std;

void solve(string &s) {
    int n = s.length();

    int tot = 0;

    for(int i=0;i<n;i++) {
        if(s[i]=='.') {
            int cnt = 0;
            while(i<n && s[i]=='.'){
                cnt++;
                i++;
            }
            tot += cnt;
            if(cnt>=3){
                cout << 2 << endl;
                return;
            }
        }
    }

    cout << tot << endl;
}

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        solve(s);
    }
}