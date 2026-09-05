#include <bits/stdc++.h>
using namespace std;

bool possible(vector<int> &arr,int x,int mid) {
    int n = arr.size();
    int curr = 0;

    for(int i=0;i<n;i++){
        int diff = arr[i]-curr;
        if(diff > mid) return false;
        curr = arr[i];
    }

    if(2*(x-curr) > mid) return false;
    return true;
}

void solve(vector<int> &arr,int x){
    int res = 0;

    int l = 0;
    int r = 2*x;

    while(l<=r){
        int mid = l+(r-l)/2;

        if(possible(arr,x,mid)){
            res = mid;
            r = mid-1;
        }
        else l = mid+1;
    }
    cout << res << endl;
}

int main() {
    int t;
    cin >> t;

    while(t--){
        int n,x;
        cin >> n >> x;
        vector<int> arr(n);
        for(int i=0;i<n;i++) cin >> arr[i];

        solve(arr,x);
    }
}