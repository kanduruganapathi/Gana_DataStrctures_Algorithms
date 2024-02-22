#include <iostream>
#include <array>
using namespace std;
int main()
{
	array<int,5> myarray{ 1, 2, 3, 4, 5 };
    cout << myarray.size();
    
	int arr[15];
	cout<<"enter array elements"<<endl;
	for(int i=0;i<10;i++)
	{
		int r;
		cin>>r;
		arr[i]=r;
	}
	
	for(int i=0;i<10;i++)
	{
		cout<<arr[i];
	}
	return 0;
}

	
