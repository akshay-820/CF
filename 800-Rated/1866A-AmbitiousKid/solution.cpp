#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &arr){
    int mini = INT_MAX;

    for(int x:arr) mini = min(mini,abs(x));
    return mini;
}

int main(){
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i=0;i<n;i++) cin >> arr[i];

    cout << solve(arr) << endl;
}