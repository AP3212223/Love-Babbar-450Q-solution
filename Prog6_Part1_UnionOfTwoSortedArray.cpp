#include<bits/stdc++.h>
using namespace std;
int main()
{
	//note method2 work only when duplicate element is not present in given array itself also array should be sorted
	//method1
	int n,m,i=0,j=0;
	cin>>n>>m;
	int a[n],b[m];
	set<int>s;
	set<int>::iterator itr;
	while(n--)
	{
		cin>>a[i];
		s.insert(a[i]);
	}
	while(m--)
	{
		cin>>b[j];
		s.insert(b[j]);
	}
	for(itr=s.begin();itr!=s.end();itr++)
	{
		cout<<*itr<<" ";
	}
/*
	//method2
	int n,m;
	cin>>n>>m;
	int arr1[n],arr2[m],i,j;
	for(i=0;i<n;i++)
	{
		cin>>arr1[i];
	}
	for(j=0;j<m;j++)
	{
		cin>>arr2[j];
	}
	i=0,j=0;
	while(i<n&&j<m)
	{
     if(arr1[i]>arr2[j])
     	{
     		cout<<arr2[j++]<<" ";
     	}
     else if(arr1[i]<arr2[j])
     	{
     		cout<<arr1[i++]<<" ";
     	}
     else
     	{
     		cout<<arr1[i++]<<" ";
     		j++;
     	}
     }
	while(i<n)
	{
		cout<<arr1[i++]<<" ";
	}
	while(j<m)
	{
		cout<<arr2[j++]<<" ";
	}
	*/
 
return 0;
}