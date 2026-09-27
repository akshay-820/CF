#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll solve(vector<ll> &arr,ll a,ll b){
    ll res = 0;

    for(ll x:arr){
       if(x+1 >= a) res+=(a-1);
       else res+=x; 
    }

    res+=b;
    return res;
}

int main(){
    int t;
    cin >> t;

    while(t--){
        ll a,b;
        int n;
        cin >> a >> b >> n;

        vector<ll> arr(n);
        for(int i=0;i<n;i++) cin >> arr[i];

        cout << solve(arr,a,b) << endl;
    }
}