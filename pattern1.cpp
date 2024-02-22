#include <iostream>
#include<utility>
using namespace std;
int main()
{
	int n;
	cout<<"enter value\n";
	cin>>n;
	for(int i=1;i<n+1;i++)
	{
		for(int j=1;j<n+1;j++)
		{
			//cout<<n-j+1<<" ";    
			cout<<j<<" ";
		}
		//cout<<"\n";
		cout<<endl;
		
		//pattern
		/* enter value 5
		   1 2 3 4 5    
		   1 2 3 4 5
		   1 2 3 4 5
		   1 2 3 4 5
		   1 2 3 4 5    */
	}
	return 0;
}

