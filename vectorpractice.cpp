#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int> v;
	v.push_back(2);//adding element at end.
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i];
	}
	return 0;
}

