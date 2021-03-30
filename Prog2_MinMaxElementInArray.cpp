#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n],i;
	//Method 1
	/*
	cin>>arr[0];
	int mn=arr[0],mx=arr[0];
	for(i=1;i<n;i++)
	{
		cin>>arr[i];
		arr[i]>mx?(mx=arr[i]):-1;
		arr[i]<mn?(mn=arr[i]):-1;

	}
	*/
	//Method 2
	int mn=INT_MAX,mx=INT_MIN;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
		arr[i]>mx?(mx=arr[i]):-1;
		arr[i]<mn?(mn=arr[i]):-1;
	}
	cout<<"min="<<mn<<endl;
	cout<<"max="<<mx<<endl;
return 0;
}



