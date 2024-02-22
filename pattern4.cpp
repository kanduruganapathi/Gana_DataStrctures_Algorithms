#include <iostream>
#include<utility>
using namespace std;
int main()
{
	int n;
	cout<<"enter value\n";
	cin>>n;
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<=i;j++)
		{
			cout<<"*"<<" ";
		}
		cout<<endl;
	}
	
		
		//pattern
		/* enter value 5
		 
		   *
		   * *
		   * * *
		   * * * *
		   * * * * *
		   
		     */
	
	return 0;
}


