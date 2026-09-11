#include <bits/stdc++.h>
using namespace std;
 
vector<int> solve(vector<int> &arr){
    int n = arr.size();
    unordered_set<int> s;
 
    for(int x:arr) s.insert(x);
    if(s.size()==1) return {};
 
    sort(arr.begin(),arr.end(),greater<int>());
 
    if(arr[0] != arr[1]) return arr;
 
    int i = 0;
    int first = arr[0];
    while(i<n && arr[i]==first){
        i++;
    }
    swap(arr[0],arr[i]);
    return arr;
}
 
int main(){
    int t;
    cin >> t;
 
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
 
        for(int i=0;i<n;i++) cin >> arr[i];
 
        vector<int> res = solve(arr);
        if(res.size()==0) cout << "NO" << endl;
        else{
            cout << "YES" << endl;
            for(int x:res) cout << x << " ";
            cout << endl;
        }
    }
}