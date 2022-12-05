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
    long long num = pow(2,n);
    long long sum = 0;
    long long mn = 0;
    long long a[n];
    for (int i = 0; i < n; ++i)
    {
        cin>>a[i];
        mn+=a[i];
    }
 
    for (int i = 0; i < num; ++i)
    {
        sum = 0;
        for (int j = 0; j < n; ++j)
        {
            if(i & 1<<j){
                sum+=a[j];
            }else{
                sum-=a[j];
            }
        }
        // cout<<sum<<endl;
        mn = min(mn,abs(sum));
    }
    cout<<mn;
}

//https://cses.fi/problemset/result/5067294/
