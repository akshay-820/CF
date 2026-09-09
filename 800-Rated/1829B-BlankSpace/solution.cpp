#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &arr){
    int res = 0;

    int n = arr.size();
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            int cnt = 0;
            while(i<n && arr[i]==0){
                i++;
                cnt++;
            }
            res = max(res,cnt);
        }
    }
    return res;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i=0;i<n;i++) cin >> arr[i];

        cout << solve(arr) << endl;
    }
}