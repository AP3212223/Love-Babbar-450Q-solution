#include<bits/stdc++.h>
using namespace std;
int main()
{
	//note method2 work only when duplicate element is not present in given array itself also array should be sorted
	//method1

	int n,m,i=0,j=0;
	cin>>n>>m;
	int a[n],b[m];
	set<int>s1,s2;
	set<int>::iterator itr1,itr2;
	while(n--)
	{
		cin>>a[i];
		s1.insert(a[i]);
	}
	while(m--)
	{
		cin>>b[j];
		s2.insert(b[j]);
	}
	for(itr1=s1.begin();itr1!=s1.end();itr1++)
	{
		for(itr2=s2.begin();itr2!=s2.end();itr2++)
		{
		 if(*itr1==*itr2)
		 {
		 	cout<<*itr1<<" ";
		 }	
		}
		
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
     		j++;
     	}
     else if(arr1[i]<arr2[j])
     	{
     		i++;
     	}
     else
     	{
     		cout<<arr1[i++]<<" ";
     		j++;
     	}
     }
	*/ 
return 0;
}