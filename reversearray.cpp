#include<iostream>
#include<conio.h>
#include<vector>
using namespace std;

vector<int> reverse(vector<int> v)
{
	int s=0,e=v.size()-1;
	while(s<=e)
	{
		swap(v[s],v[e]);
		s++;
		e--;
	}
	return v;
}
	

int main()
{
	vector<int> v;
	v.push_back(3);
	v.push_back(7);
	v.push_back(9);
	v.push_back(37);
	v.push_back(73);
	
	vector<int> ans=reverse(v);
	for(int i=0;i<ans.size();i++)
	{
	cout<<ans[i]<<" ";
}
	return 0;
}

