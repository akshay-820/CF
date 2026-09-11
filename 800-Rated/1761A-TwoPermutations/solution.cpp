#include <bits/stdc++.h>
using namespace std;

bool solve(int n,int a,int b){
    if(n==1) return true;
    if(n==a && a==b) return true;

    int diff = a+b;
    return (n-diff>=2);
}

int main(){
    int t;
    cin >> t;

    while(t--){
        int n,a,b;
        cin >> n >> a >> b;

        bool res = solve(n,a,b);
        if(res) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}