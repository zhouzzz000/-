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
 	freopen("Mergeinterval1.txt","r",stdin);
 	freopen("Mergeinterval2.txt","w",stdout);
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
	mm *h,*p,*q; 
	mm *t;
	h = new mm;
	t = new mm;
	t->l = a[0].l;
	t->r = a[0].r;
	h->next = t;
	q = h->next;
	p = h->next;
	 for(int i = 1;i < n;i++)
	{
		t = new mm;
		t->l = a[i].l;
		t->r = a[i].r;
		q->next = t;
		q = q->next;
	}
	q->next = NULL;
	/*for(;p!=NULL;p=p->next)
	{
		cout << p->l << " " << p->r << endl;
	}*/

	while(p->next!=NULL)
	{
		if(p->r<=p->next->l) {
			p=p->next;
			continue;
		}
		else if(p->r < p->next->r) {
			t = new mm;
			t = p->next;
			p->r = t->r;
			p->next = t->next;
			continue;
		}
		else if(p->r>p->next->r){
			t = new mm;
			t = p->next;
			p->next = t->next;
		}
	}
	h = h->next;
	while(h!=NULL)
	{
		
		cout << h->l << "," << h->r;
		if(h->next!=NULL)cout <<" ";
		h=h->next;
	}
 	return 0;
 }
