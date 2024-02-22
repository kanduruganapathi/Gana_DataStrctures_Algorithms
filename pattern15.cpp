#include <iostream>
using namespace std;

int main() 
{
	/*
	 enter value
     5
			*
		   ***
		  *****
		 *******
		*********
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
		for(int k=0;k<=i;k++)
		{
			cout<<"*";
		}
		
		for(int j=0;j<i;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}

	
		
  return 0;
}
