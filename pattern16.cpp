#include <iostream>
using namespace std;

int main() 
{
	/*
	 enter value
	 5
			1
		   121
		  12321
		 1234321
		123454321

	 
	          */
			
	int n;
	cout<<"enter value\n";
	cin>>n;
	int k=1;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-k;j++)
		{
			cout<<" ";
		}
		k=k+1;
		for(int k=1;k<=i+1;k++)
		{
			cout<<k;
		}
		
		for(int j=i;j>0;j--)
		{
			cout<<j;
		}
		cout<<endl;
	}

	
		
  return 0;
}
