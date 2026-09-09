#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &arr){
    int n = arr.size();
    int val = 0;

    for(int x:arr) val = (val^x);

    if(val==0) return 0;
    if(n%2==0){
        if(val!=0) return -1;
    }

    return val;
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