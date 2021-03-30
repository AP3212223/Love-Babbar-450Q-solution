#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	int arr[n],i;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
    sort(arr,arr+n);
	cout<<"Kth_min="<<arr[k-1]<<endl;
	cout<<"Kth_max="<<arr[n-k]<<endl;
return 0;
}



