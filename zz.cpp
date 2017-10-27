#include<iostream>
using namespace std;
int a[100000];
int count = 0;
int main()
{
	int m ;
	cin >> m;
	for(int i = 0;i < m;i++)
	{
		cin >> a[i];
	}
	for(int i = 0;i < m-1;i++)
	{
		for(int j =i+1;j<m;j++)
		{
			if(a[i] > a[j])count++;
		}
	}
	cout << count;
	return 0;
}
