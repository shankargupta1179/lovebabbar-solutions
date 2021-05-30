#include<bits/stdc++.h>
using namespace std;
#define ll long long
pair<long long,long long> getMinMax(long long a[],int n);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		ll a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		pair<ll,ll> pp = getMinMax(a,n);
		cout<<pp.first<<" "<<pp.second<<endl;
	}
}


pair<long long, long long> getMinMax(long long a[], int n) {
 pair<long ,long> k;
sort(a,a+n);
k.first=a[0];
k.second=a[n-1];
return k; 
}
