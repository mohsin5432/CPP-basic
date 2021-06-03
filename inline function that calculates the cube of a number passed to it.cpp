//inline function that calculates the cube of a number passed to it
#include <iostream>
#include <cmath>
using namespace std;
inline int cube(int a)
{
	int p=pow(a,3);
	return p;
}
main ()
{
	int g;
	cout<<"enter any number=";
	cin>>g;
	cout<<cube(g);
}
