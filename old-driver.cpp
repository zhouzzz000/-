#include<iostream>
using namespace std;
const int maxn = 101;
int bs[maxn];
int n;
int minbs = 0;
void bfs(int k,int a[][maxn])
{
	int s[maxn];
	for(int i = 0;i<n;i++)
	{
		bs[i] = a[k][i];
		s[i] = 0;
		
	}
	s[k] = 1;
	int t = k;
	for(int i = 0;i<n;i++)
	{
		int mins = 10000;
		int m;
		for(int j = 0;j < n;j++)
		{
			if(i!=j&&a[t][j]<mins) mins = a[t][j],m = j;
		}
		if(mins == 10000) break; 
		s[m] = 1;
		t = m;
		for(int j = 0;j < n;j++)
		{
			if(!s[j]&&t!=j&&a[t][j]<bs[j])
			{
				bs[j] = a[t][j];
			}
		}
	}
	for(int i = 0;i < n;i++)
	{
		minbs += bs[i];
	}

}
int main()
{
	int a[maxn][maxn];

	cin >> n;
	for(int i = 0;i < n;i++)
		for(int j = 0;j < n;j++)
			cin >> a[i][j];
	bfs(0,a);
	cout << minbs;
	return 0;
 } 
