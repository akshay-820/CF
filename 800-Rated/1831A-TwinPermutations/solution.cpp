#include <bits/stdc++.h>
using namespace std;

vector<int> solve(vector<int> &arr){
    int n = arr.size();
    int up = n+1;

    vector<int> res(n);
    
    for(int i=0;i<n;i++){
        res[i] = up-arr[i];
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

        vector<int> res = solve(arr);
        for(int x:res) cout << x << " ";
        cout << endl;
    }
}