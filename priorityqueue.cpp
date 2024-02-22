#include <iostream>  
#include<queue>  
using namespace std;  
int main()  
{  
 priority_queue<int> p;    
 p.push(10);
 p.push(20); 
 p.push(30); 
 p.pop();
 p.push(40);
 
 while(!p.empty())
 {
	 cout<<p.top();
	 p.pop();
	 
 }
   
 
 return 0;  
}  
