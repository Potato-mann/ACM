#include<bits/stdc++.h>
using namespace std;
int main(){
    long double a,b,c;
    scanf("%Lf%Lf%Lf",&a,&b,&c);
    if(a<b) swap(a,b);
    if(a<c) swap(a,c);
    if(b<c) swap(b,c);
    long double ans=a*a/2+b*b/2+c*c/2;
    long double dis;
    if(a>=b+c) dis=a-b-c;
    else{
        dis=0;
    }
    dis=dis*dis;
    dis/=2;
    ans-=dis;
    ans=-ans;
    printf("%.1Lf\n",ans);
}