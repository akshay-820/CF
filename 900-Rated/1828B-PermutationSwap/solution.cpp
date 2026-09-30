#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &arr){
    int n = arr.size();

    vector<int> diff(n);
    for(int i=0;i<n;i++){
        diff[i] = abs(arr[i]-(i+1));
    }

    int res = 0;
    for(int x:diff){
        res = gcd(res,x);
    }
    return res;
}

int main(){
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