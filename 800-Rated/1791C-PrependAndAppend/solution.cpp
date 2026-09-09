#include <bits/stdc++.h>
using namespace std;

int solve(string &s){
    int n = s.length();
    int len = 0;
    int i=0,j=n-1;

    while(i<j && s[i]!=s[j]){
        len+=2;
        i++;
        j--;
    }
    return n-len;
}

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;

        cout << solve(s) << endl;
    }
}