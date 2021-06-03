#include <iostream>
using namespace std;
int max(int x,int y)
{
	int z=x;
	x=y;
	y=z;
}
main()
{int a,b;
cout<<"program to find max of 2 number\nenter 1st number="; 
cin>>a;
cout<<"enter 2nt number=";
cin>>b;
cout<<"max number is="<<max(a,b);

	
}	

