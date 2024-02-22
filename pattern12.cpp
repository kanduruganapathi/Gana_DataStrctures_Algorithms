#include <iostream>
using namespace std;

int main() 
{
	/*
	 enter value
	 4
	 * * * *
	 * * *
	 * *
	 *                */
			
	int n;
	cout<<"enter value\n";
	cin>>n;
	int k=n;
	for(int i=0;i<n;i++)
	{
		for(int j=k;j>0;j--)
		{
			cout<<"*"<<" ";
		}
		cout<<endl;
		k=k-1;
	}
  return 0;
}
