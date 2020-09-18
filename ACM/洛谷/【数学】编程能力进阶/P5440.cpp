#include<bits/stdc++.h>
using namespace std;
string s;
bool unknow[8];
int cnt;
bool isprime(int x){
    for(int i=2;i<=sqrt(x);i++){
        if(x%i==0) return false;
    }
    return true;
}
void getnum(int x,int num){
    if(x==8){
        if(num%100<=30&&(num%10000/100)<=12&&isprime(num%100)&&isprime(num%10000)&&isprime(num)){
            //cout<<num<<endl;
            cnt++;
        }
        return;
    }
    num*=10;
    if(unknow[x]==0){
        num+=s[x]-'0';
        getnum(x+1,num);
    }else{
        for(int i=0;i<=9;i++){
            num+=i;
            getnum(x+1,num);
            num-=i;
        }
    }
}
void solve(){
    cin>>s;
    cnt=0;
    for(int i=0;i<=s.size();i++){
        if(s[i]=='-'){
            unknow[i]=1;
        }else{
            unknow[i]=0;
        }
    }
    getnum(0,0);
    cout<<cnt<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--) solve();
}