#include <bits/stdc++.h>
using namespace std;

bool solve(vector<int> &arr){
    int n = arr.size();

    for(int a=0;a<n;a++) {
        for(int i=1;i<n-1;i++){
            if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
                swap(arr[i],arr[i+1]);
            }
        }
    }

    for(int i=1;i<n;i++) if(arr[i] < arr[i-1]) return false;
    return true;
}

int main() {
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i=0;i<n;i++) cin >> arr[i];

        bool res = solve(arr);
        if(res) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}