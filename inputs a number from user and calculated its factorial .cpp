//inputs a number from user and calculated its factorial 
#include <iostream>
using namespace std;
main()
{
	int a,pro=1;
	cout<<"enter number to find factorial=";
	cin>>a;
	
	for(int i=a; i>=1; i-- )
	{
		pro=pro*i;
	}
	cout<<"FACTORIAL OF "<<a<<" IS= "<<pro;
}
