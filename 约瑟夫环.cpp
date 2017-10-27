#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	int n,m;
	cin  >> n >> m;
	int *a;
	a = new int[n+1];
	for(int i = 1;i <= n;i++)
	{
		a[i] = i;
	}
	int x = n,y = 0;
	int i = 1;
	while(x > 0)
	{
		if(i > n) i =i%n;
		if(a[i]){
			y+=1;
			if(y == m)
			{
				cout << a[i] <<" ";
				y = 0;
				a[i] = 0;
				x--;
			}	
		}
		i++;
	}
	return 0;
}
