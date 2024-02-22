#include <iostream>
#include<typeinfo>
using namespace std;
int main()
{
	cout << "Size of char : " << sizeof(char) << endl;
	cout << "Size of int : " << sizeof(int) << endl;

	cout << "Size of long : " << sizeof(long) << endl;
	cout << "Size of float : " << sizeof(float) << endl;

	cout << "Size of double : " << sizeof(double) << endl;

	int a;
	cout << sizeof(typeid(a).name()) << endl;
	return 0;
}
