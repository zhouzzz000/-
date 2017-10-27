#include<iostream>  
#include<string>  
#include<stdio.h>  
using namespace std;  
int pos;string str;  
double fun()  
{  
    ++pos;  
    if(str[pos]==' ')++pos;  
    if(str[pos]>='0'&&str[pos]<='9')  
    {  
        string s;  
        while(pos!=str.size()&&str[pos]!=' ')  
            s+=str[pos++];  
        double tp;  
        sscanf(s.c_str(),"%lf",&tp);  
        return tp;  
    }  
    if(str[pos]=='+')  
        return fun()+fun();  
    if(str[pos]=='-')  
        return fun()-fun();  
    if(str[pos]=='*')  
        return fun()*fun();  
    if(str[pos]=='/')  
        return fun()/fun();  
}  
int main()  
{  
    while(getline(cin,str))  
    {  
        pos=-1;  
        printf("%.2lf\n",fun());  
  
    }  
}  
