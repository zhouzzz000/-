#include<iostream>
#include<algorithm>
#include<queue>
#include<vector>
#include<functional>
long int a[1000001];
using namespace std;
priority_queue<long int, vector<long int> ,greater<long int> > q;
int main()
{
	int n;
	cin >> n;
	for(int i = 0;i < n;i++)
	{
		cin >> a[i];
		q.push(a[i]);
	}
	/*for(int i = 0;i < n;i++)
	{
		long int x = q.top();
		q.pop();
		cout << x  << " "  ;
	}*/
	long int x,y,sum,all = 0;
	while(q.size() != 1)
	{
		x = q.top();
		q.pop();
		y = q.top();
		q.pop();
		sum = x+y;
		all+=sum;
		q.push(sum);
	}
	cout << all;
	q.pop();
	return 0;
}
