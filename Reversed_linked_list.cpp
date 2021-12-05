#include<bits/stdc++.h>
using namespace std;
class lst
{
public:
	int val;
	lst *next;
	lst *pre;
};

lst* create_node(lst *head,lst *pre,int k)
{
	lst *node=new lst;
	node->val=k;
	node->next=0;
	node->pre=pre;
	if(head==0)
	{
		return node;
	}
	pre->next=node;
	return head;
}

void reverse_lst(lst *start,lst *ed,int count)
{
	int i,j,temp;
	for(i=0;i<count/2;++i)
	{
		temp=start->val;
		start->val=ed->val;
		ed->val=temp;
		start=start->next;
		ed=ed->pre;
	}
	return ;
}

int main()
{
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	int n,i,j,k,m,t;
	cin>>n;
	lst *head=0,*last=0,*start,*ed,*curr;
	for(i=0;i<n;++i)
	{
		cin>>k;
		head=create_node(head,last,k);
		if(i==0)
		{
			last=head;
		}
		else
		{
			last=last->next;
		}
	}
	curr=head;
	int c=0,count=0;
	for(i=0;i<n;++i)
	{
		if(curr->val%2==0)
		{
			if(c==1&&i==n-1)
			{
				count++;
				reverse_lst(start,curr,count);
			}
			else if(c==0)
			{
				//c=1;
				start=curr;
			}
			c=1;
			count++;
		}
		else
		{
			if(c==1)
			{
				ed=curr->pre;
				reverse_lst(start,ed,count);
			}
			c=0;
			count=0;
		}
		curr=curr->next;
	}
	curr=head;
	for(i=0;i<n;++i)
	{
		if(i==0)
		{
			cout<<curr->val;
		}
		else
		{
			cout<<" "<<curr->val;
		}
		curr=curr->next;
	}
	cout<<endl;
	return 0;
}
