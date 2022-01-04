#include<bits/stdc++.h>
using namespace std;

int main()
{
	int i,j,k,n,m,rem,poss,t,ans;
	cin>>t;
	for(i=0;i<t;++i)
	{
		cin>>n>>m>>k;
		int arr[m];
		for(j=0;j<m;++j)
		{
			cin>>arr[j];
		}
		if(arr[0]-1>=k)
		{
			cout<<k<<endl;
			continue;
		}
		else
		{
			k=k-(arr[0]-1);
		}
		poss=0;
		for(j=1;j<m;++j)
		{
			if(arr[j]-arr[j-1]-1>=k)
			{
				poss=1;
				ans=arr[j-1]+k;
				break;
			}
			else
			{
				k=k-(arr[j]-arr[j-1]-1);
			}
		}
		if(poss==1)
		{
			cout<<ans<<endl;
		}
		else
		{
			rem=n-arr[m-1];
			if(rem>=k)
			{
				cout<<arr[m-1]+k<<endl;
			}
			else
			{
				cout<<-1<<endl;
			}
		}
	}
	return 0;
}
