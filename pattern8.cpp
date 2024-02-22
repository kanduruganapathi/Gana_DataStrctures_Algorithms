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
		5
		A
		B C
		D E F
		G H I J
		K L M N O
	 
	    
                   */
	 int k=1;
	 for(int i=1;i<=n;i++)
	 {
		 int c=k;
		 for(int j=1;j<=i;j++)
		 {
			 char ch=('A'+c-1);
			 cout<<ch<<" ";
			 c=c+1;
		 }
		 k=k+i;
		 cout<<endl;
	 }
	return 0;
}


