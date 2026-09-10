#include <bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
    while(b!=0){
        int x = a%b;
        a = b;
        b = x;
    }
    return a;
}

bool solve(vector<int> &arr){
    int n = arr.size();

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(gcd(arr[i],arr[j])<=2) return true;
        }
    }
    return false;
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