#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n],i;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	//method 1
    for(int i=0;i<n-1;i++)
    {
      swap(arr[i],arr[n-1]);
    }
    /*
	//method 2
	int last=arr[n-1];
	for(i=n-2;i>=0;i--)
	{
		arr[i+1]=arr[i];
	}
	arr[0]=last;
	*/
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}