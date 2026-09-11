#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int solve(vector<ll> &arr){
    int n = arr.size();
 
    int res = 0;
    for(int i=1;i<n;i++){
        if(arr[i]%2==arr[i-1]%2) res++;
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
 
        cout << solve(arr) << endl;
    }
}