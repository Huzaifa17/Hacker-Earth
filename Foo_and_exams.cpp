#include<iostream>
using namespace std;

long long bs(long long a,long long b,long long c,long long d,long long k)
{
	long long l=0,r,max=0,mid,mid2;
	r=999999;
	double ft,ft1,kk,mm;
	while(l<=r)
	{
		mid=(l+r)/2;
		kk=mid;
		ft=(a*kk*kk*kk)+(b*kk*kk)+(c*kk)+d;
		mid2=mid+1;
		mm=mid2;
		ft1=(a*mm*mm*mm)+(b*mm*mm)+(c*mm)+d;
		if(ft<=k)
		{
			/*cout<<"mid: "<<mid<<endl;
			cout<<"ft: "<<ft<<endl;
			cout<<"ft1: "<<ft1<<endl;*/
			if(ft1>k)
			{
				if(mid>max)
				{
					max=mid;
				}
			}
			l=mid+1;
		}
		else
		{
			r=mid-1;
		}
	}
	return max;
}

int main()
{
	int i,j,k,t;
	cin>>t;
	for(i=0;i<t;++i)
	{
		long long a,b,c,d,k;
		cin>>a>>b>>c>>d>>k;
		cout<<bs(a,b,c,d,k)<<endl;
	}
	return 0;
}
		
