#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n],i,count0=0,count1=0,count2=0;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
		(arr[i]==0)?count0++:-1;
		(arr[i]==1)?count1++:-1;
		(arr[i]==2)?count2++:-1;

	}
	i=0;
    while(count0--)
    {
    	arr[i++]=0;
    }
    while(count1--)
    {
    	arr[i++]=1;
    }
    while(count2--)
    {
    	arr[i++]=2;
    }
    for(i=0;i<n;i++)
    {
    	cout<<arr[i]<<" ";
    }
return 0;
}



