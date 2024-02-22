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
		A
		B B
		C C C
		D D D D
                   */
	 
	 for(int i=1;i<=n;i++)
	 {
		 int c=i;
		 for(int j=1;j<=i;j++)
		 {
			 char ch=('A'+c-1);
			 cout<<ch<<" ";
			 
		 }
		 cout<<endl;
	 }
	 
	

	
	
	
		
	
   
	return 0;
}


