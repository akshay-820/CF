#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll solve(ll a,ll b,ll c,ll d){
    if(b-a > d-c || b>d) return -1;

    ll res = 0;
    res += d-b;
    a+= (d-b);
    res+= a-c;
    return res;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        ll a,b,c,d;
        cin >> a >> b >> c >> d;

        cout << solve(a,b,c,d) << endl;
    }
}