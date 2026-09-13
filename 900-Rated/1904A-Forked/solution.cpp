#include <bits/stdc++.h>
using namespace std;

bool queenAttack(int a,int b,int posx,int posy,int xq,int yq){
    if(posx+a==xq && posy+b==yq) return true;
    if(posx-a==xq && posy+b==yq) return true;
    if(posx+a==xq && posy-b==yq) return true;
    if(posx-a==xq && posy-b==yq) return true;

    if(posx+b==xq && posy+a==yq) return true;
    if(posx-b==xq && posy+a==yq) return true;
    if(posx+b==xq && posy-a==yq) return true;
    if(posx-b==xq && posy-a==yq) return true;
    return false;
}

int solve(int a,int b,int xk,int yk,int xq,int yq){
    int res = 0;
    if(queenAttack(a,b,xk+a,yk+b,xq,yq)) res++;
    if(queenAttack(a,b,xk-a,yk+b,xq,yq)) res++;
    if(queenAttack(a,b,xk+a,yk-b,xq,yq)) res++;
    if(queenAttack(a,b,xk-a,yk-b,xq,yq)) res++;

    if(queenAttack(a,b,xk+b,yk+a,xq,yq)) res++;
    if(queenAttack(a,b,xk-b,yk+a,xq,yq)) res++;
    if(queenAttack(a,b,xk+b,yk-a,xq,yq)) res++;
    if(queenAttack(a,b,xk-b,yk-a,xq,yq)) res++;

    if(a==b) return res/2; 
    return res;
}

int main(){
    int t;
    cin >> t;

    while(t--){
        int a,b;
        cin >> a >> b;

        int xk,yk;
        cin >> xk >> yk;

        int xq,yq;
        cin >> xq >> yq;

        cout << solve(a,b,xk,yk,xq,yq) << endl;
    }
}