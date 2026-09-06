#include <bits/stdc++.h>
using namespace std;

bool solve(int a,int b,int c){
    if(c%2==0){
        a+= c/2;
        b+= c/2;
        return (a>b);
    }
    a+= (c/2)+1;
    b+= c/2;
    return (a>b);
}

int main(){
    int t;
    cin >> t;

    while(t--){
        int a,b,c;
        cin >> a >> b >> c;

        bool res = solve(a,b,c);
        if(res) cout << "First" << endl;
        else cout << "Second" << endl;
    }
}