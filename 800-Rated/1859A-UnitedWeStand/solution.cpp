#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool same(vector<ll> &arr){
    int n = arr.size();

    for(int i=1;i<n;i++) if(arr[i]!=arr[i-1]) return false;
    return true;
}

pair<vector<ll>,vector<ll>> solve(vector<ll> &arr){
    int n = arr.size();

    vector<ll> a1;
    vector<ll> a2;

    sort(arr.begin(),arr.end());

    a1.push_back(arr[0]);
    int i = 1;
    while(i<n && arr[i]==arr[i-1]){
        a1.push_back(arr[i]);
        i++;
    }

    while(i<n){
        a2.push_back(arr[i]);;
        i++;
    }

    return {a1,a2};
}

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<ll> arr(n);
        for(int i=0;i<n;i++) cin >> arr[i];

        if(same(arr)) cout << -1 << endl;
        else{
            pair<vector<ll>,vector<ll>> res = solve(arr);

            vector<ll> v1 = res.first;
            vector<ll> v2 = res.second;
            cout << v1.size() << " " << v2.size() << endl;
            for(ll x:v1) cout << x << " ";
            cout << endl;
            for(ll x:v2) cout << x << " ";
            cout << endl;
        }
    }
}