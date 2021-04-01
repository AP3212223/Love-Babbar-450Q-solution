#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n],i,j=0,temp;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
		(arr[i]<0)?(swap(arr[i],arr[j++])):void(0);
	}
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}