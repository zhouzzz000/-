#include<iostream>
#include<string>
#include<map>
using namespace std;
string s[500+5];
map<string,bool> m;
int main() 
{
	bool ishave = false;
	int n = 0;
	while(cin >> s[n])
	{
		m[s[n]]=true;
		
		n++;
	}
	for(int i = 0;i < n;i++)
	{
		
		for(int k = 0;k < s[i].size()-1;k++)
		{
			string x1,x2;
			x1=s[i].substr(0,k+1);
			x2=s[i].substr(k+1);
		//cout << x1 << " " << x2 << endl;
			if(m[x1]&&m[x2])
			{
				ishave = true;
				cout << s[i]<<endl;
				break;
			}
		}
		 
	}
	if(!ishave) cout << "no exists"<< endl;
	return 0;
}
