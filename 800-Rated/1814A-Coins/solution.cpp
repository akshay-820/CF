#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool solve(ll n,ll k){
    if(n%2!=0 && k%2!=0) return true;
    if(n%2!=0 && k%2==0) return false;
    return true;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        ll n,k;
        cin >> n >> k;

        bool res = solve(n,k);
        if(res) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}