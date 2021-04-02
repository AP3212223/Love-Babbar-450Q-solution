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
/* method3 using stl 
	vector<int>v1;
	int input;
	while(cin>>input)
	{
		v1.push_back(input);
	}
	int rotR=1;
	rotate(v1.begin(),v1.begin()+v1.size()-rotR,v1.end());
	for(auto i=0;i<v1.size();i++)
	{
		cout<<v1[i]<<" ";
	}
	*/
/*
   -------------------------------------------------------------
   concept of rotation using stl 
   theory->
   void rotate(ForwardIterator first, ForwardIterator middle, ForwardIterator last)
first, last : Forward Iterators to the initial and final positions of the sequence to be rotated
middle : Forward Iterator pointing to the element within the range [first, last] that is moved to the first position in the range.

Left Rotation : To rotate left, we need to add the vector index. For example, you have to rotate vector left 3 times. The 3th index of vector becomes first element. vec.begin() + 3 will rotate vector 3 times left.
Right Rotation : To rotate right, we need to subtract the vector index. For example, you have to rotate vector right 3 times. The 3th last index of vector becomes first element. vec.begin()+vec.size()-3 will rotate vector 3 times right.
Examples:
code->
#include<bits/stdc++.h>
using namespace std;
int main()
{  vector<int> vec1;
	int input;
	while(cin>>input)
	{
     vec1.push_back(input);
	}
    // Print old vector
    cout << "Old vector :";
    for(int i=0; i < vec1.size(); i++)
        cout << " " << vec1[i];
    cout << "\n";
    // Rotate vector left 3 times.
    int rotL=3;
  
    // std::rotate function
    rotate(vec1.begin(), vec1.begin()+rotL, vec1.end());
  
    // Print new vector
    cout << "New vector after left rotation :";
    for (int i=0; i < vec1.size(); i++)
        cout<<" "<<vec1[i];
    cout << "\n\n";
  
    vector <int> vec2{1,2,3,4,5,6,7,8,9};
  
    // Print old vector
    cout << "Old vector :";
    for (int i=0; i < vec2.size(); i++)
        cout << " " << vec2[i];
    cout << "\n";
  
    // Rotate vector right 4 times.
    int rotR = 4;
  
    // std::rotate function
    rotate(vec2.begin(), vec2.begin()+vec2.size()-rotR, vec2.end());
  
    // Print new vector
    cout << "New vector after right rotation :";
    for (int i=0; i < vec2.size(); i++)
        cout << " " << vec2[i];
    cout << "\n";
  

	return 0;
}
*/
