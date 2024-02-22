#include <iostream>
using namespace std;
int fact(int x);
int main()
{
	int x=5;
	cout<<"gana"<<endl;
	cout<<fact(x);
	return 0;
}
int fact(int x)
{
	if(x==0)
	{
		return -1;
	}
	else if(x==1)
	{
		return 1;
	}
	else
	{
		return (x*fact(x-1));
	}
}

