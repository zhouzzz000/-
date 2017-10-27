#include<iostream>  
#include<stdio.h>  
using namespace std;  
  
int map[9][9];    //�洢����  
char ch;          //�����������ֺ��ַ�'��'  
int num;          //��¼�ж��ٸ�'?'  
bool flag;        //��¼�Ƿ����ҵ��������������  
struct Node       //��¼'?'�ĺ�������  
{  
    int x;  
    int y;  
}node[81];  
  
  
void DFS(int number);  
  
int main()  
{  
          
        for (int i = 0; i < 9; i++)  
        {  
            for (int j = 0; j < 9; j++)  
            {  
  
                cin >> ch;  
                if (ch == '?')  
                {  
                    map[i][j] = 0;  
                    node[num].x = i;  
                    node[num].y = j;  
                    num++;  
                }  
                else  
                    map[i][j] = ch - '0';  
            }  
        }  
       
        DFS(0);  
    return 0;  
}  
bool Judge(int t, int number)  
{  
    //ͬ��ͬ���Ƿ�����ͬ  
    for (int i = 0; i < 9; i++)  
    {  
        if (t == map[node[number].x][i] || t == map[i][node[number].y])  
            return 0;  
    }  
  
    //ͬһ3*3������������Ƿ��ظ�  
    int x = node[number].x - node[number].x % 3;  
    int y = node[number].y - node[number].y % 3;  
    for (int i = 0; i < 3; i++)  
    {  
        for (int j = 0; j < 3; j++)  
        {  
            if (map[x + i][y + j] == t)  
                return 0;  
        }  
    }  
    //����Ҫ��Ļ�������1  
    return 1;  
}  
  
void DFS(int number)  
{  
    if (number == num)//���ҵ�����Ҫ����������������  
    {  
        flag = true;  
        for (int i = 0; i < 9; i++)  
        {  
            cout << map[i][0];  
            for (int j = 1; j < 9; j++)  
                cout << " " << map[i][j];  
            cout << endl;  
        }  
        return;  
    }  
  
    for (int i = 1; i <= 9; i++)  
    {  
        if (!flag && Judge(i, number))  
        {  
            map[node[number].x][node[number].y] = i;  
            DFS(number + 1);  
            map[node[number].x][node[number].y] = 0;  
        }  
    }  
  
}  
