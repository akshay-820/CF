#include <bits/stdc++.h>
using namespace std;

vector<int> solve(int n,int k,int x){
    if(x==1 && k==2 && n%2!=0) return {};
    if(x==1 && k==1) return {};

    if(x!=1){
        vector<int> res(n);
        for(int i=0;i<n;i++) res[i] = 1;
        return res;
    }

    if(n%2==0){
        vector<int> res;
        for(int i=0;i<n/2;i++) res.push_back(2);
        return res;
    }

    vector<int> res;
    res.push_back(3);
    n-=3;
    while(n>0){
        res.push_back(2);
        n-=2;
    }
    return res;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n,k,x;
        cin >> n >> k >> x;

        vector<int> res = solve(n,k,x);
        int m = res.size();
        if(m==0){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
            cout << m << endl;
            for(int x:res) cout << x << " ";
            cout << endl;
        }
    }
}