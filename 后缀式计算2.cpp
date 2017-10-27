#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void caculate(char str[])
{
	int stack[100];
	int len=strlen(str);
	int i,j=0;
	int a,b,c;
	for(i=0;i<len;i++)
	{
		if(str[i]>='0' && str[i]<='9')
		{
			stack[j]=str[i]-'0';
			j++;
		}
		if(str[i]=='+')
		{
			j--;
			a=stack[j];
			j--;
			b=stack[j];
			c=a+b;
			stack[j]=c;
			j++;
		}
		else if(str[i]=='-')
		{
			j--;
			a=stack[j];
			j--;
			b=stack[j];
			c=b-a;
			stack[j]=c;
			j++;
		}
		else if(str[i]=='*')
		{ 
			j--;
			a=stack[j];
			j--;
			b=stack[j];
			c=a*b;
			stack[j]=c;
			j++;
		}
		else if(str[i]=='/')
		{
			j--;
			a=stack[j];
			j--;
			b=stack[j];
			c=b/a;
			stack[j]=c;
			j++;
		}
	}
	printf("%d\n",stack[j-1]);
}
int main()
{
	char str[105];
	while(~scanf("%s",str))
	{
		caculate(str);
	}
	return 0;
}
