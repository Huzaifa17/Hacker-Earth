#include<iostream>
using namespace std;

long long int bs(long long int a,long long int b,long long int d,long long int m,long long int x)
{
	long long int i,j,k,n,left=0,right=1000000001,mid;
	long long int sum=0,pos=1000000001;
	while(left<=right)
	{
		mid=(left+right)/2;
		long long int nob=(mid/(m+1));
		long long int noa=mid-nob;
		sum=d+(noa*a)+(nob*b);
		/*cout<<"sum: "<<sum<<endl;
		cout<<"mid: "<<mid<<endl;
		cout<<"nob: "<<nob<<endl;
		cout<<"noa: "<<noa<<endl;*/
		if(sum>=x)
		{
			pos=mid;
			right=mid-1;
		}
		else
		{
			left=mid+1;
		}
	}
	return pos;
}

int main()
{
	long long i,j,k,n,m,t,a,b,d,x;
	cin>>t;
	for(i=0;i<t;++i)
	{
		cin>>d>>a>>m>>b>>x;
		cout<<bs(a,b,d,m,x)<<endl;
	}
	return 0;
}
