#include <bits/stdc++.h>
using namespace std;

bool sorted(vector<int> &arr,int n){
    for(int i=1;i<n;i++){
        if(arr[i] < arr[i-1]) return false;
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    
    while(t--){
        int n,k;
        cin >> n >> k;
        
        vector<int> arr(n);
        for(int i=0;i<n;i++) cin >> arr[i];
        
        if(sorted(arr,n)) cout << "YES" << endl;
        else if(k==1) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
}