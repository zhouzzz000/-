#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int n;
	int t = 0;
	while(scanf("%d",&n)!=EOF)
	{
		if(t) cout << endl;
		if(n<1) cout << "NO!" ;
		else if(!(n&(n-1))) cout << "YES!" ;
		else cout << "NO!" ;
		t=1;
	}
	return 0; 
 } 
