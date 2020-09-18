#include<bits/stdc++.h>
using namespace std;
int main(){
    double x,y;
    scanf("%lf%lf",&x,&y);
    double r;
    scanf("%lf",&r);
    double dis=sqrt(x*x+y*y);
    printf("%.6f\n",fabs(dis-2*r));
    if(x==0&&y==0) printf("0.00\n");
    else if(y==0) printf("Error\n");
    else{
        printf("%.2f\n",fabs(x/y));
    }
}