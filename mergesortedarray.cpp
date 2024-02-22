#include<iostream>
#include<vector>
using namespace std;


int main()
{
	
	vector<int> v1;
	v1.push_back(3);
	v1.push_back(4);
	v1.push_back(5);
	vector<int> v2;
	v2.push_back(1);
	v2.push_back(2);
	
	int i=0,j=0;
	
	while(i<=v1.size() && j<=v2.size())
	{
		if(v1[i]<v2[j])
		{
			i++;
		}
		else
		{
			swap(v1[i],v2[j]);
			i++;
		}
	}
	for(int i=0;i<=v1.size();i++)
	{
		cout<<v1[i];
	}
	return 0;
}

		
