#include<bits/stdc++.h>
using namespace std;
int main(){
    long long num0=0;
    long long num2=0;
    long long num5=0;
    int n;
    cin>>n;
    long long sum=1;
    for(int i=1;i<=n;i++){
        int x=i;
        while(x%10==0){
            x/=10;
            num0+=n-i+1;
        }
        while(x%5==0){
            x/=5;
            num5+=n-i+1;
        }
    }
    sum=num0+num5;
    cout<<sum<<endl;
}