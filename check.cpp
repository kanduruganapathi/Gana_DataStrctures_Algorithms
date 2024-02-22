#include<iostream>
#include<math.h>
using namespace std;
int binarysearch(int arr[],int ke,int n)
{
	int s=0;
	int e=n-1;
	int mid=floor((s+e)/2);
	
	while(s<=e)
	{
		if(arr[mid]==ke)
		{
			return mid;
		}
		if(arr[mid]>ke)
		{
			s=mid+1;
		}
		else
		{
			e=mid-1;
		}
		mid=floor((s+e)/2);
	}
	return -1;
}
int main()
{
	int arr[100];
	int n;
	cout<<"enter number elements\n";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int k;
		cin>>k;
		arr[i]=k;
	}
	int ke;
	cout<<"enter key value\n";
	cin>>ke;
	int res=binarysearch(arr,ke,n);
	cout<<res;
	return 0;
}
