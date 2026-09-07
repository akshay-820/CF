#include <bits/stdc++.h>
using namespace std;

bool sorted(vector<int> &arr){
    int n = arr.size();
    
    for(int i=1;i<n;i++) if(arr[i]<arr[i-1]) return false;
    return true;
}

int solve(vector<int> &arr){
    int n = arr.size();
    if(!sorted(arr)) return 0;

    int mini = INT_MAX;
    for(int i=1;i<n;i++){
        mini = min(mini,arr[i]-arr[i-1]);
    }

    return (mini/2)+1;
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