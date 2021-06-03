// function that returns the sum of cubes of the digits of a number pass to it
#include <iostream>
#include <cmath>
using namespace std;
float scube(int a)
{
	float rem,sum=0;
	cout<<"enter any number=";
	cin>>a;
	while (a!=0)
	{
	rem=a%10;
	sum=sum+pow(rem,3);
	a=a/10;
	}
	return sum;
	
}
main()
{
	int g;
	cout<<scube(g);
}
