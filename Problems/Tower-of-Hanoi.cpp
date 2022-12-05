#include <bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;

void move(int n, int x,int y){
    if(n==1){
        cout<<x<<" "<<y<<endl;
        return; 
    }
    move(n-1,x ,  6-x-y);
    cout<< x<<" "<<y<<endl;
    move(n-1,6-x-y, y);
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.in","r",stdin);
    freopen("output.in","w",stdout);
#endif
 
    int n;
    cin>>n;

    int m = n;
    long long num = 0;
    while(m--){
        num = 2*num + 1;
    }
    cout<<num<<endl;
    move(n,1,3);
}

//https://cses.fi/problemset/task/2165/
