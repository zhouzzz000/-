#include<iostream>
#include<string.h>
#include<cstdio>
#include<cctype>
using namespace std;
char s[105];
int pos;
int fun()
{
	--pos;
	if(pos >= 0)
	{
		if(s[pos] >= '0' && s[pos] <= '9')
			{
				char s1;
				s1 = s[pos];
				int x = s1 - '0';
				return s1 - '0';
			}
		else if(s[pos]=='+') return fun()+fun();  
	    else if(s[pos]=='-') return fun()-fun();  
	    else if(s[pos]=='*') return fun()*fun();  
	    else if(s[pos]=='/') return fun()/fun();  
    }
}
int main()
{
	while(~scanf("%s",s))
	{
		pos = strlen(s);
		cout << fun() << endl;
	}
	return 0;
}
 
