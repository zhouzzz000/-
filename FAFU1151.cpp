#include<iostream>
#include<string>
using namespace std;
int main()
{
//	freopen("fafu1151.txt","r",stdin);
//	freopen("fafu11510.txt","w",stdout);
	string s;
	int m;
	while(cin >> s)
	{
		int k = 0;
		while(s[k]!=' ')k++;
		m = s[k+1]-'0';
		s[k+1] = '\0';
		int i;
		while(m--)
		{	
			for(i = 0;i < s.size()-1;i++)
			{
				int x1 = s[i] - '0';
				int x2 = s[i+1] - '0';
				if(x1>x2)
				{
					s[i] = '\0';
					//m--;
					break;
				}
			}
			if(i == s.size()-1)
			{
				s[i] = '\0';
			//	m--;
			}
		}
		for(i = 0;i < s.size();i++)
		{
			if(s[i]!='\0')cout << s[i];
		}
		cout << endl;
	}
	return 0;
}
