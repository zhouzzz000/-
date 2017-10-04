#include<iostream>
#include<cstdio>
#include<algorithm>
#define ll long long 
using namespace std;
struct ss
{
	ll l,r;
}a[100000];
struct mm
{
	ll l,r;
	mm *next;
};
bool cmp(ss a,ss b)
{
	return a.l<b.l;
}
 int main()
 {
 	ll l ,r;
 	char c;
 	int n;
 	n = 0;
 	while(scanf("%d%c%d",&l,&c,&r) != EOF)
 	{
 		a[n].l = l;
 		a[n].r = r;
 		n++;
	 }
	 sort(a,a+n,cmp);
	 int p = 0;
	 for(int i = 1;i < n;i++)
	 {
	 	if(a[p].l == -1000)
		{
		 p++;
		 continue;
		}
	 	if(a[p].r<a[i].l)
	 	{
	 		p++;
	 		continue;
		 }
		 else if(a[p].r>=a[i].r)
		 {
		 	a[i].r = -1000;
		 	a[i].l = -1000;
		 	continue;
		 }
		 else if(a[p].r>=a[i].l)
		 {
		 	a[p].r = a[i].r;
		 	a[i].r = -1000;
		 	a[i].l = -1000;
		 	continue;
		 }
		 
	 }
	 for(int i = 0;i<n;i++)
	 {
	 	if(a[i].l != -1000)
	 	{
	 		cout << a[i].l << "," << a[i].r;
	 		if(i!=n-1)cout<<" ";
		 }
	 }
 	return 0;
 }
