#include<iostream>
#include<string>
using namespace std;
int count = 0;
typedef struct node
{
public:
	char data;
	node *lch;
	node *rch;
}node,*tree; 
void createtree(tree &root,string &pr,string &mi)
{
	if(pr.size()==0)
	{
		root = NULL;
		return ;
	}
	char rnode = pr[0];
	int p = mi.find(rnode);
	string lch_mid = mi.substr(0,p);
	string rch_mid = mi.substr(p+1);
	int l_len = lch_mid.size();
	int r_len = rch_mid.size();
	string lch_pre = pr.substr(1,l_len);
	string rch_pre = pr.substr(1+l_len);
	root = new node;
	if(root != NULL)
	{
		root->data = rnode;
		createtree(root->lch,lch_pre,lch_mid);
		createtree(root->rch,rch_pre,rch_mid);
	}
}
/*void midt(tree h)
{
	if(h!=NULL)
	{
		midt(h->lch);
		cout << h->data;
		midt(h->rch);
	}
}*/
int deep(tree t)
{
	if(t == NULL)
	{
		return 0;
	}
	int lch_len = deep(t->lch);
	int rch_len = deep(t->rch);
	if(lch_len > rch_len) return lch_len+1;
	else return rch_len+1;
}
void leaf(tree t)
{
	if(t->lch!=NULL)leaf(t->lch);
	if(t->rch!=NULL)leaf(t->rch);
	if(t->rch==NULL&&t->lch==NULL)
	{
	  count++;
	  return;
	}
}
int main()
{
	tree t;
	string pre,mid;
	cin >> pre;
	cin >> mid;
	//int x = pre.size();
	//int y = mid.size();
	createtree(t,pre,mid);
	//midt(t);
	leaf(t);
	cout << deep(t) << " " << count;
	return 0;
 } 
