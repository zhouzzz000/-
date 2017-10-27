#include<iostream>
#include<iomanip>
#include<algorithm>
#include<cctype>
using namespace std;
string s[30];
bool cmp(string s1,string s2)
{
/*	if(isdigit(s1[0])&&isalpha(s2[0]))
	{
		return s1 > s2;
	}
	if(isdigit(s2[0])&&isalpha(s1[0]))
	{
		return s1 < s2;
	}
	if(isdigit(s1[0])&&isdigit(s2[0]))
	{	
		for(int i = 0;i<s1.size()&&i<s2.size();i++)
		{
			if(s1[i] == s2[i])i++;
			else break;
		}
		if(i == s1.size())
		{
			if(s2[i] < s2[0])return s2 < s1;
		}
		
	}*/
	string x1,x2;
	x1 = s1+s2;
	x2 = s2+s1;
	return x1 > x2;
}
int main()
{
	int n;	
	while(cin >> n)
	{
		//getchar();
		for(int i = 0;i < n;i++)
		{
			cin >> s[i];
		}
		sort(s,s+n,cmp);
		for(int i = 0;i < n;i++)
		{
			cout << s[i];
		}
		cout << endl;
	}
/*	string s1 = "1s";
	string s2 = "b";
	cout << (s1<s2) <<endl;*/
	return 0;
}
