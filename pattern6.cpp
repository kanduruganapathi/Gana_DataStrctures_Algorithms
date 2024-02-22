#include <iostream>
#include<utility>
using namespace std;
int main()
{
	int n;
	cout<<"enter value\n";
	cin>>n;
	
	/* Pattern
	 enter value
	 4
	 1
	 2 1
	 3 2 1
	 4 3 2 1   */

	
	
	for(int i=1;i<=n;i++)
	{
		//for(int j=1;j<=i;j++)
		//{
			//cout<<i-j+1<<" ";
		//}
		for(int j=i;j>0;j--)
		{
			cout<<j<<" ";
		}
		cout<<endl;
	}
		
	
   
	return 0;
}


