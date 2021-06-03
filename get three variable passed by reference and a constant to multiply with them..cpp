//get three variable passed by reference and a constant to multiply with them. 
#include <iostream>
using namespace std;
#define PI 3.14
float multiply(int &a,int &b, int &c)
{
	float p=a*b*c*PI;
	return p;
}
main()
{
	int x,y,z;
	cout<<"enter 1st number=";
	cin>>x;
	cout<<"enter 2nd number=";
	cin>>y;
	cout<<"enter 3rd number=";
	cin>>z;
	cout<<multiply(x,y,z);
	
}
