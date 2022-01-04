#include<iostream>
using namespace std;

unsigned long long int bs(unsigned long long int a,unsigned long long int b,unsigned long long int c,unsigned long long int k)
{
	long long int i,j,n,left=0,right=1000000001,mid;
	unsigned long long int sum,pos=1000000001;
	while(left<=right)
	{
		mid=(left+right)/2;
		sum=c+(mid*mid*a)+(mid*b);
		/*cout<<"sum: "<<sum<<endl;
		cout<<"mid: "<<mid<<endl;
		* */
		if(sum>=k)
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
	unsigned long long i,j,k,n,m,t,a,b,d,c,x;
	cin>>t;
	for(i=0;i<t;++i)
	{
		cin>>a>>b>>c>>k;
		cout<<bs(a,b,c,k)<<endl;
	}
	return 0;
}
