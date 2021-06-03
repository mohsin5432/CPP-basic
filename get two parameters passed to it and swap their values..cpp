//get two parameters passed to it and swap their values.
#include <iostream>
using namespace std;
void swap(int x,int y)
{
	int z=x;
	x=y;
	y=z;
	cout<<"    "<<x<<"  :  "<<y;
}
main()
{int a,b;
cout<<"program to swap 2 numbers\nenter 1st number="; 
cin>>a;
cout<<"enter 2nt number=";
cin>>b;
cout<<"BEFORE SWAPING"<<endl;
cout<<"    "<<a<<"  :  "<<b<<endl;
cout<<"AFTER  SWAPING"<<endl;
swap(a,b);

	
}	

