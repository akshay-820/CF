#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &arr){
    int n = arr.size();
    
    int twos = 0;
    for(int x:arr) if(x==2) twos++;

    if(twos==0) return 1;

    int twos2 = 0;
    for(int i=0;i<n-1;i++){
        if(arr[i]==2){
            twos2++;
            twos--;
            if(twos2==twos) return i+1;
        }
    }
    return -1;
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