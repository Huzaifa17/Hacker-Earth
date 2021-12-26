#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll bsearch(double arr[],ll n,double tar)
{
	ll i,j,k,left=0,right=n-1,mid,position=0;
	while(left<=right)
	{
		mid=(left+right)/2;
		double val=(arr[mid]/(mid+1));
		if(val<tar)
		{
			position=mid+1;
			left=mid+1;
		}
		else
		{
			right=mid-1;
		}
	}
	return position;
}

int main()
{
	ll i,j,k,n,m,t;
	cin>>n;
	double arr[n];
	for(i=0;i<n;++i)
	{
		cin>>arr[i];
	}
	sort(arr,arr+n);
	double arrsum[n];
	arrsum[0]=arr[0];
	for(i=1;i<n;++i)
	{
		arrsum[i]=arrsum[i-1]+arr[i];
	}
	cin>>t;
	for(i=0;i<t;++i)
	{
		double val,tar;
		cin>>tar;
		cout<<bsearch(arrsum,n,tar)<<endl;
	}
	return 0;
}
