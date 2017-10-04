#include<iostream>
#include<string>
#include<cstdio>
#include<algorithm>
int a[100000+5];
using namespace std;
int main()
{
	int N;
	cin >> N;
	int k = 0;
	int maxsum,sum,beginpos,endpos,begin,end;
	while(N--)
	{
		maxsum=-2147483647-1,sum = -1,beginpos = 0,endpos = 0,begin = 0,end = 0;
		int t;
		cin >> t;
		for(int i = 0;i < t;i++)
		{
			cin >> a[i];
		}
		for(int i = 0;i < t;i++)
		{
			if(sum < 0)
			{
				sum = a[i];
				begin = i;
				end = i;
			}
			else{
				sum+=a[i];
				end++;
			}
			if(maxsum < sum)
			{
				maxsum = sum;
				beginpos = begin;
				endpos = end;
			}
		}
		k++;
		printf("Case %d:\n",k);
		printf("%d %d %d\n",maxsum,beginpos+1,endpos+1);
		if(N) printf("\n");
	}
	return 0;
 } 
