#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool solve(ll n,ll k,ll x){
    ll total = n*(n+1)/2;

    ll min_sum = k*(k+1)/2;
    ll max_sum = total - ((n-k)*(n-k+1)/2);

    return (x>=min_sum && x<=max_sum);
}

int main(){
    int t;
    cin >> t;
    
    while(t--){
        ll n,k,x;
        cin >> n >> k >> x;

        bool res = solve(n,k,x);
        if(res) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}