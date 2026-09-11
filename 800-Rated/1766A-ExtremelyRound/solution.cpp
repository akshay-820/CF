#include <bits/stdc++.h>
using namespace std;

int digits(int n){
    int res = 0;
    while(n>0){
        res++;
        n/=10;
    }
    return res;
}

int solve(int n){
    int res = 0;
    int dig = digits(n);
    res+= (dig-1)*9;

    int div = 1;
    for(int i=0;i<dig-1;i++) div*=10;
    
    res+= (n/div);
    return res;
}

int main(){
    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;

        cout << solve(n) << endl;
    }
}