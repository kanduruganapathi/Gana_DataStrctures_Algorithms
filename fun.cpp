#include <iostream>
using namespace std;\
int fun(int a, int b);
int main()
{
	int a,b;
	a=1;
	b=2;
	float c,d;
	c=2.3;
	d=4.5;
	cout<<fun(a,b); 
	cout<<fun(c,d);
	return 0;
}
int fun(int a,int b)
{
	return a+b;
}
