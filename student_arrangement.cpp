#include<iostream>
#include<vector>
#include<map>
using namespace std;

long long solution(vector<long long> v,long long n,long long m,long long k)
{
	map<long long,long long> mp;
	map<long long,long long> :: iterator it;
	long long i,j,sum=0;
	for(i=1;i<=m;++i)
	{
		mp[i]=0;
	}
	for(i=0;i<n;++i)
	{
		if(mp.size()==0)
		{
			sum+=(n-i);
			break;
		}
		it=mp.lower_bound(v[i]);
		if(it==mp.end())
		{
			it=mp.begin();
		}
		if(it->first!=v[i])
		{
			sum++;
			//cout<<"s: "<<sum<<endl;
			it->second++;
		}
		else
		{
			it->second++;
		}
		if(it->second==k)
		{
			mp.erase(it);
		}	
	}
	//cout<<sum<<endl;
	return sum;
}

int main()
{
	long long i,j,k,n,m;
	vector<long long> v;
	cin>>n>>m>>k;
	for(i=0;i<n;++i)
	{
		long long t;
		cin>>t;
		v.push_back(t);
	}
	cout<<solution(v,n,m,k)<<endl;
	return 0;
}
