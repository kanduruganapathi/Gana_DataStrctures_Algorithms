#include <iostream>
using namespace std;

int main() 
{
	/*
	 enter value
	 5
	 * * * * *
	 * * * *
	 * * *
	 * *
	 *                 */
			
	int n;
	cout<<"enter value\n";
	cin>>n;
	for(int i=n;i>0;i--)
	{
		for(int j=0;j<i;j++)
		{
			cout<<"*"<<" ";
		}
		cout<<endl;
	}
			
			
  
  return 0;
}
