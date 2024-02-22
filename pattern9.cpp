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
		D
		C D
		B C D
		A B C D	 
	    
                   */
	
	 for(int i=1;i<=n;i++)
	 {
		 int c=i;
		 for(int j=1;j<=i;j++)
		 {
			 char ch=('A'+n-c);
			 cout<<ch<<" ";
			 c=c-1;
		 }
		 cout<<endl;
	 }
	return 0;
}


