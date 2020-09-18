#include<bits/stdc++.h>
using namespace std;
long long gcd(long long a,long long b){
    while(b){
        long long c=a%b;
        a=b;
        b=c;
    }
    return a;
}
int main(){
    long long n,p,k;
    cin>>n>>p>>k;
    long long gc=gcd(n,p);
    long long m=n/gc;
    k%=m;
    long long start=p*k%n;
    cout<<start<<endl;
}