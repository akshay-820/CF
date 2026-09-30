#include <bits/stdc++.h>
using namespace std;

int solve(string &s,int n){
    int res = 0;

    for(int i=0;i<n;i++){
        int len = 0;

        char x = s[i];
        while(i<n && s[i]==x){
            i++;
            len++;
        }
        i--;
        res = max(res,len);
    }
    return res+1;
}

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;

        cout << solve(s,n) << endl;
    }
}