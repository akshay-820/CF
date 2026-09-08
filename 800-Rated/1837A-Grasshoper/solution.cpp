#include <bits/stdc++.h>
using namespace std;

vector<int> solve(int x,int k){
    if(x%k!=0){
        return {x};
    }
    else{
        if(x%2==0 && k%2==0) return {x-1,1};
        else if(x%2==0 && k%2!=0) return {x-2,2};
        else if(x%2!=0 && k%2!=0) return {x-1,1};
    }
    return {};
}

int main(){
    int t;
    cin >> t;

    while(t--){
        int x,k;
        cin >> x >> k;

        vector<int> res = solve(x,k);
        cout << res.size() << endl;
        for(int x:res) cout << x << " ";
        cout << endl;
    }
}