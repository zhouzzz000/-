#include<iostream>
#include<string.h>
#include<cstdio>
using namespace std;
int p[10001],v[10001];
int re[10001][2] ;

int main()
{
	int n,m,k;
	scanf("%d%d",&m,&n);
	for(int i = 0;i < n;i++)
	{
		scanf("%d%d",&re[i][0],&re[i][1]);
		v[i] = 0;
	}
	scanf("%d",&k);
	memset(p,-1,sizeof(p));
	p[k] = 0;
	int x = 0;
	while(x<n)
	{
		for(int i = 0;i < n && !v[i];i++)
		{
			if(re[i][0]!=re[i][1]&&p[re[i][0]] > -1 && p[re[i][1]] < p[re[i][0]]+1 )
			{
				p[re[i][1]] = p[re[i][0]]+1;
				v[i] == 1;
				x++;
			}
		 } 
	}
	for(int i = 1;i < m;i++)
	{
		printf("%d\n",p[i]);
	}
	printf("%d",p[m]);
	return 0;
}
