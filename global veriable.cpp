#include <iostream>
using namespace std;
int x=7;
void num(int a)
{
	cout<<a*x<<endl;
}
void num2(int b)
{
	cout<<x*b<<endl;
}
main()
{
	int g,j,h=2;
	cin>>g>>j;
	num(g);
	cout<<h*x<<endl;
	num2(j);
}
