#include <bits/stdc++.h>
using namespace std;

int solve(vector<vector<char>> &arr){
    int curr = 1;
    int i1=0,i2=9,j1=0,j2=9;
    int res = 0;

    while(curr<=5){
        int cnt = 0;

        for(int i=j1;i<=j2;i++){
            if(arr[i1][i]=='X') cnt++;
            if(arr[i2][i]=='X') cnt++;
        }

        for(int i=i1+1;i<=i2-1;i++){
            if(arr[i][j1]=='X') cnt++;
            if(arr[i][j2]=='X') cnt++;
        }

        res += curr*cnt;
        curr++;
        i1++ , i2--, j1++, j2--;
    }
    return res;
}

int main(){
    int t;
    cin >> t;

    while(t--){
        vector<vector<char>> arr(10,vector<char>(10));

        for(int i=0;i<10;i++){
            for(int j=0;j<10;j++){
                cin >> arr[i][j];
            }
        }

        cout << solve(arr) << endl;
    }
}