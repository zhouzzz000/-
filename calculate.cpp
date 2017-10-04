#include<iostream>  
#include<iomanip>  
#include<cstring>  
#include<cmath>  
#include<algorithm>  
#include<cstdio>  
using namespace std;  
#define ll long long
ll n,l,a[1000005]={0},cnt=0;  
int main(){  
    scanf("%d%d",&n,&l);  
    for(ll i=1;i<=n;i++)scanf("%d",a+i);  
    sort(a+1,a+n+1);  
    ll i=1,j=n;  
    while(i<j)  
    {  
        if(a[i]+a[j]<=l)  
        {  
            cnt+=j-i;  
            i++;  
        }  
        else j--;  
    }  
    ll total_possibilities=n*(n-1)/2;  
    printf("%.2lf",(double)cnt/total_possibilities);  
    return 0;  
}  

