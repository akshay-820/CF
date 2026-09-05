#include <bits/stdc++.h>
using namespace std;

bool solve(int n){
    if(n%3==0) return false;
    return true;
}

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        bool res = solve(n);
        if(res) cout << "First" << endl;
        else cout << "Second" << endl;
    }
}