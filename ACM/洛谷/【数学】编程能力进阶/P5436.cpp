#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n;
    cin>>n;
    if(n==1){
        cout<<0<<endl;
        return;
    }
    cout<<(long long)n*(n-1)<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}