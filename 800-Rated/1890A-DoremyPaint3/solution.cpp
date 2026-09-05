#include <bits/stdc++.h>
using namespace std;

bool solve(vector<int> &arr){
    int n = arr.size();
    if(n==2) return true;

    unordered_map<int,int> mpp;
    for(int x:arr) mpp[x]++;

    if(mpp.size()>2) return false;
    if(mpp.size()==1) return true;

    auto ele = mpp.begin();
    if(n%2==0 && ele->second==n/2) return true;
    if(n%2!=0 && (ele->second==n/2 || ele->second==(n/2)+1)) return true;
    return false;
}

int main() {
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i=0;i<n;i++) cin >> arr[i];

        bool res = solve(arr);
        if(res) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}