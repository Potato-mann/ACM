#include<bits/stdc++.h>
using namespace std;
const int maxn=1e4+100;
int prime[maxn];
int isprime(int x){
    if(prime[x]==1) return true;
    for(int i=2;i<=sqrt(x);i++){
        if(x%i==0){
            return false;
        }
    }
    prime[x]=1;
    return true;
}
int main(){
    int n,k;
    cin>>n>>k;
    int flag=0;
    for(int i=1;i<=n-k;i++){
        if(isprime(i)&&isprime(i+k)){
            flag=1;
            cout<<i<<" "<<i+k<<endl;
        }
    }
    if(flag==0){
        cout<<"empty"<<endl;
    } 
}