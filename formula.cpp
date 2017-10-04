#include<iostream>
using namespace std;

bool isprime(int a)
{
	for(int i = 2;i<=a/2;i++)
	{
		if(a%i == 0) return false;
	}
	return true;
 
}
int main()
{
	int k;
	cin >> k;
	int minlen = 10000,maxlen = 0,count = 0;
	for(int i = 2;i <= k;i++)
	{
		int len = 0 ,sum = 0;
		if(isprime(i))
		{
			sum += i; 
			len++;
			if(sum == k)
			{
				count++;
				minlen = 1;
				continue;
			}
			for(int j = i+1;j<=k;j++)
			{
				if(sum == k)
				{
					if(len < minlen) minlen = len;
					if(len > maxlen) maxlen = len;
					count++;
					break;
				}
				if(isprime(j)&&sum < k)
				{
					sum += j;
					len++;
				}
				if(sum > k) break;
			}
		}
	}
	if(minlen == 10000) minlen = 0;
	if(maxlen == 0) maxlen = minlen;
	cout <<maxlen << " " <<minlen <<" " << count;
	return 0;
 } 
