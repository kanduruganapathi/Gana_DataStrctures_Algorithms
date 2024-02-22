#include <iostream>
#include<utility>
using namespace std;
int main()
{
	int n;
	cout<<"enter value\n";
	cin>>n;
	int k=1;
	for(int i=1;i<=n;i++)
	{
		
		int c=k;
		for(int j=1;j<=i;j++)
		{
			cout<<c<<" ";
			c++;
			
			
		}
		k=k+i;
		cout<<endl;
	}
	
	
		
		//pattern
		/* enter value 5
		 
		 1
		 2 3
		 4 5 6
		 7 8 9 10
         11 12 13 14 15
		 
		   
		   
		     */
	
	return 0;
}


