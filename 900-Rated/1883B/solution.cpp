#include <bits/stdc++.h>
using namespace std;

bool solve(string &s,int k){
    int n = s.length();
    if(n==k) return true;

    vector<int> count(26,0);

    for(int i=0;i<n;i++) count[s[i]-'a']++;

    for(int i=0;i<26;i++){
        if(count[i]%2!=0 && k>0){
            count[i]--;
            k--;
        } 
    }

    int odds = 0;
    for(int i=0;i<26;i++) if(count[i]%2!=0) odds++;

    if(odds==0) return true;
    if(odds>1) return false;
    if(k%2==0) return true;
    return false;
}

int main(){
    int t;
    cin >> t;

    while(t--){
        int n,k;
        cin >> n >> k;
        string s;
        cin >> s;

        bool res = solve(s,k);
        if(res) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}