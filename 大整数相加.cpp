#include<iostream>
#include<cstdio>
#include<string.h>
#include<algorithm>
int s[10000+10];
char s1[10000+5];
char s2[10000+5];
using namespace std;
int main()
{
	//freopen("3.out","w",stdout);
	int N;
	cin >> N;
	int k = 0;
	while(N--)
	{
		int k1 = 0,k2 = 0;
		scanf("%s",s1);
		scanf("%s",s2);
		k1 = strlen(s1);
		k2 = strlen(s2);
		int t = 0 ,i = 0;
		int x;
		while(k1>0&&k2>0)
		{
			
			x = s1[--k1]-'0'+s2[--k2]-'0'+t;
			s[i++] = x%10;
			t = x/10;
		}
		while(k1>0)
		{
			x = s1[--k1]-'0' + t;
			s[i++] = x%10;
			t = x/10;
		}
		while(k2>0)
		{
			x = s2[--k2]-'0' + t;
			s[i++] = x%10;
			t = x/10;
		}
		if(t > 0) s[i++] = 1,t=0;
		cout << "Case "<<++k<<":"<<endl;
		cout<<s1<<" + "<<s2<<" = "; 
		i = i-1;
		while(i>0&&s[i] == 0) 
		{
			i--;	
		}
		while(i>=0)
		{
			cout << s[i--];
		}
		 if(N!=0) {  
            cout << endl << endl;
        }
		else{  
            cout << endl;  
        } 
	}
	return 0;
}

