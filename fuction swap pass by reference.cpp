//get two parameters passed by reference and swap their values
#include <iostream>
using namespace std;
int swap(int &x,int &y)
{
	int z=x;
	x=y;
	y=z;
}
main()
{int a,b;
cout<<"program to swap 2 numbers\nenter 1st number="; 
cin>>a;
cout<<"enter 2nt number=";
cin>>b;
swap(a,b);
cout<<a<<":"<<b;

	
}	

