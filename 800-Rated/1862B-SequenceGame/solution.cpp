#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<ll> solve(vector<ll> &arr){
    int n = arr.size();

    vector<ll> res;
    res.push_back(arr[0]);

    for(int i=1;i<n;i++){
        if(arr[i] >= arr[i-1]) res.push_back(arr[i]);
        else{
            res.push_back(arr[i]);
            res.push_back(arr[i]);
        }
    }
    return res;
}

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        vector<ll> arr(n);
        for(int i=0;i<n;i++) cin >> arr[i];

        vector<ll> res = solve(arr);
        
        cout << res.size() << endl;
        for(ll x:res) cout << x << " ";
        cout << endl;
    }
}