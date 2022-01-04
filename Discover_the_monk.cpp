#include<bits/stdc++.h>
using namespace std;

bool bs(int arr[],int n,int val)
{
	int i,j,k,m,left=0,right=n-1,mid;
	while(left<=right)
	{
		mid=(left+right)/2;
		if(arr[mid]==val)
		{
			return true;
		}
		else if(arr[mid]>val)
		{
			right=mid-1;
		}
		else
		{
			left=mid+1;
		}
	}
	return false;
}

int main()
{
	int i,j,k,n,m,t;
	cin>>n>>t;
	int arr[n];
	for(i=0;i<n;++i)
	{
		cin>>arr[i];
	}
	sort(arr,arr+n);
	for(i=0;i<t;++i)
	{
		cin>>m;
		if(bs(arr,n,m))
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
