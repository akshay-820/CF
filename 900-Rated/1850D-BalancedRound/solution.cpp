#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll solve(vector<ll> &arr,ll k){
    int n = arr.size();
    sort(arr.begin(),arr.end());
    ll res = 1;

    for(int i=0;i<n-1;i++){
        ll ele = arr[i];
        
        ll sub_res = 1;

        while(i+1<n && abs(ele-arr[i+1])<=k){
            sub_res++;
            i++;
            ele = arr[i];
        }

        res = max(res,sub_res);
    }

    return n-res; //since you should return the number of elements to be removed
}

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        ll k;
        cin >> n >> k;
        vector<ll> arr(n);
        for(int i=0;i<n;i++) cin >> arr[i];

        cout << solve(arr,k) << endl;
    }
}