#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll solve(ll n){
    ll res = 1;

    while(n%res==0){
        res++;
    }
    return res-1;
}

int main(){
    int t;
    cin >> t;

    while(t--){
        ll n;
        cin >> n;
        cout << solve(n) << endl;
    }
}