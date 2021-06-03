//function that will get three sides of a triangle as parameters and return true if the triangle is valid
#include <iostream>
using namespace std;
void tri(float a,float b,float c)
{

	if(a+b>c && b+c>a && a+c>b)
	cout<<"TRIANGLE IS VALID";
	else
	cout<<"TRIANGLE IS NOT VALID";
}
main()
{
	float x,y,z;
	cout<<"ENTER SIDE 1=";
	cin>>x;
	cout<<"ENTER SIDE 2=";
	cin>>y;
	cout<<"ENTER SIDE 3=";
	cin>>z;
	tri(x,y,z);

}
