#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &arr){
    int sum = accumulate(arr.begin(),arr.end(),0);
    return 0-sum;
}

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n-1);
        for(int i=0;i<n-1;i++) cin >> arr[i];

        cout << solve(arr) << endl;
    }
}