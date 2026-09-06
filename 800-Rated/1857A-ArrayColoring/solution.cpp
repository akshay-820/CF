#include <bits/stdc++.h>
using namespace std;

bool solve(vector<int> &arr){
    int sum = accumulate(arr.begin(),arr.end(),0);
    return (sum%2==0);
}

int main(){
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