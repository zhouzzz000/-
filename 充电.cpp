#include<iostream>
#include<algorithm>
using namespace std;
bool cmp(int x,int y)
{
	return x>y;
}
int main()
{
	int t;
	int a[100+1];
	cin >> t;
	while(t--)
	{
		int n,m; 
		int count = 0;
		cin >> n >> m;
		for(int i = 0;i < n;i++)
		{
			cin >> a[i];
		}
		sort(a,a+n,cmp);
		for(int i = 0;i < n;i++)
		{
			int p = 100-a[i];
			if(m >= p){
				count++;
				m-=p;
			}
			else if(m<p) break;
		}
		cout << count;
		if(t) cout << endl;
	}
	return 0;
}
