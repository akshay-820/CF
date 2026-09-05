#include <bits/stdc++.h>
using namespace std;

bool isSub(string s1,string s2){
    int m = s1.length();
    int n = s2.length();
    if(n>m) return false;

    string s = "";
    for(int i=0;i<n;i++) s+=s1[i];
    if(s2==s) return true;

    for(int i=n;i<m;i++){
        s.erase(0,1);
        s+=s1[i];
        if(s==s2) return true;
    }
    return false;
}

int solve(string &x,string &s){
    int n = x.length();
    int m = s.length();
    int res = 0;
    int moves = 6;
    if(isSub(x,s)) return res;

    while(moves-- && !isSub(x,s)){
        x += x;
        n = x.length();
        res++;
    }

    if(!isSub(x,s)) return -1;
    return res;
}

int main() {
    int t;
    cin >> t;

    while(t--){
        int n,m;
        cin >> n >> m;
        string x,s;
        cin >> x;
        cin >> s;

        cout << solve(x,s) << endl;
    }
}