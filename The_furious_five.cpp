#include<bits/stdc++.h>
using namespace std;

long long int sum(long long int n)
{
	long long int i=1,j,k,s=0,m;
	k=n;
	while(k)
	{
		m=pow(5,i);
		k=n/m;
		s+=k;
		i++;
	}
	return s;
}

long long int bs(long long int n)
{
	long long int l=0,r=100000000001,k,m,s,min=1000000000000000001;
	long long int mid;
	while(l<=r)
	{
		mid=(l+r)/2;
		k=sum(mid);
		/*cout<<"mid: "<<mid<<endl;
		cout<<"sum: "<<k<<endl;*/
		if(k>=n)
		{
			if(mid<min)
			{
				min=mid;
			}
			r=mid-1;
		}
		else
		{
			l=mid+1;
		}
	}
	return min;
}


int main()
{
	long long i,j,k,n,m,t;
	cin>>t;
	for(i=0;i<t;++i)
	{
		cin>>n;
		cout<<bs(n)<<endl;
	}
	return 0;
}
