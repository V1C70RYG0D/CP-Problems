#include <bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;
 
int main(){
#ifndef ONLINE_JUDGE
    freopen("input.in","r",stdin);
    freopen("output.in","w",stdout);
#endif
 
    int n;
    cin>>n;
    for(int i = 1; i <= n ;i++){
        long long p = i*i;
        long long a = (p)*(p-1);
        a/=2;
        long long b = (i-1)*(i-2)*4;
        cout<<a-b<<endl;
    }
}

//https://cses.fi/problemset/result/5067643/
