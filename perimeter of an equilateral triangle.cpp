//perimeter of an equilateral triangle
#include <iostream>
using namespace std;
float para(float side)
{
	float p=3*side;
	return p;
}
main()
{
	float x;
	cout<<"ENTER THE SIDE OF EQUILATERAL TRIANGLE=";
	cin>>x;
	cout<<"PARAMETER IS="<<para(x);
}
