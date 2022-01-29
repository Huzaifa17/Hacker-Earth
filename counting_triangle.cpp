#include<bits/stdc++.h>
using namespace std;

void balanced(long long &n,long long &m,long long &k)
{
	long long arr[3]={n,m,k};
	sort(arr,arr+3);
	n=arr[2];
	m=arr[1];
	k=arr[0];
	return ;
}
	
int main()
{
	long long i,j,k,n,m,t;
	map<long long,long long> mp;
	map<long long,long long> :: iterator it;
	cin>>t;
	long long count=0;
	int c=0;
	for(i=0;i<t;++i)
	{
		cin>>n>>m>>k;
		balanced(n,m,k);
		j=n*100+m*10+k;
		mp[j]++;
	}
	for(it=mp.begin();it!=mp.end();++it)
	{
		if(it->second==1)
		{
			count++;
		}
	}
	cout<<count<<endl;
	return 0;
}
