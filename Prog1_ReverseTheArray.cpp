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
	 int j;
	 i=0,j=n-1;
	 while(i<j)
	 {
	 	swap(arr[i],arr[j]);
	 	i++;
	 	j--;
	 }
	 for(i=0;i<n;i++)
	 {
	 	cout<<arr[i]<<" ";
	 }
	return 0;
}