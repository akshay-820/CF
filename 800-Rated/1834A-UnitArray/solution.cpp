#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &arr){
    int pos = 0;
    int neg = 0;

    for(int x:arr){
        if(x==1) pos++;
        else neg++;
    }

    int res = 0;
    if(neg>=pos){
        int diff = neg-pos;
        if(diff%2==0){
            res+= (diff/2);
            pos+= (diff/2);
            neg-= (diff/2);
        }
        else{
            int add = (diff/2)+1;
            res+= add;
            pos+=add;
            neg-=add;
        }
    }
    
    if(neg%2==0) return res;
    return res+1;
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