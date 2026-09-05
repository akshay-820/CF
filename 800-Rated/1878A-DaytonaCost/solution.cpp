#include <bits/stdc++.h>
using namespace std;

bool solve(vector<int> &arr,int k){
    int n = arr.size();
    unordered_set<int> s;

    for(int x:arr) s.insert(x);

    if(s.find(k)==s.end()) return false;
    return true;
}

int main() {
    int t;
    cin >> t;

    while(t--){
        int n,k;
        cin >> n >> k;

        vector<int> arr(n);
        for(int i=0;i<n;i++) cin >> arr[i];

        bool res = solve(arr,k);
        if(res) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}