#include<iostream>
using namespace std;

long long int bs(long long int arr2[],long long int val,long long int left,long long int right)
{
	int i,j,k,mid,monkiness=0,pos=left;
	while(left<=right)
	{
		mid=(left+right)/2;
		if(arr2[mid]>=val)
		{
			k=mid-pos;
			if(k>monkiness)
			{
				monkiness=k;
			}
			left=mid+1;
		}
		else
		{
			right=mid-1;
		}
	}
	return monkiness;
}

int main()
{
	long long int i,j,k,n,m,t;
	cin>>t;
	for(j=0;j<t;++j)
	{
		cin>>n;
		long long int arr1[n],arr2[n],max=0;
		for(i=0;i<n;++i)
		{
			cin>>arr1[i];
		}
		for(i=0;i<n;++i)
		{
			cin>>arr2[i];
		}
		for(i=0;i<n;++i)
		{
			k=bs(arr2,arr1[i],i,n-1);
			//cout<<"ind: "<<i+1<<" val: "<<k<<endl;
			if(k>max)
			{
				max=k;
			}
		}
		cout<<max<<endl;
	}
	return 0;
}
